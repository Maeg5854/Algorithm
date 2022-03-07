/*
* 1018 : ü���� �ٽ� ĥ�ϱ�
* 2022.03.03.
*/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

// 8x8 ������ ������ �ٲ���� Ÿ�� ���� ����, WB, BW �� �ּ� ������
int retouch(vector<string>tiles, int r, int c)
{
	int cnt_WB = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (tiles[r + i][c + j] != WB[i][j])
				cnt_WB++;
		}
	}
	return min(cnt_WB, 64-cnt_WB);
};

// 8x8 �����̹ǿ� ��ü Ÿ�� ���� Ž���ϸ� �ٲ���� �ּ� Ÿ�� ���� ����
int move_and_retouch(vector<string> tiles, int n, int m)
{
	int min_touch = -1;
	int i = 0, j = 0;
	while (i <= n - 8) {
		j = 0;
		while (j <= m - 8) {
			int temp = retouch(tiles, i, j);
			if (min_touch == -1) // ù ������ min touch �ʱ�ȭ
				min_touch = temp;
			if (min_touch > temp) // �ּҰ����� ������Ʈ
				min_touch = temp;
			j++;
		}
		i++;
	}
	return min_touch;
};

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> tiles;
	for (auto i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		tiles.push_back(temp);
	}
	
	cout << move_and_retouch(tiles, n, m) << '\n';
	return 0;
}