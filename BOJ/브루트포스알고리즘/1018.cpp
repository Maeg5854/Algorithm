/*
* 1018 : 체스판 다시 칠하기
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

// 8x8 프레임 내에서 바꿔야할 타일 개수 리턴, WB, BW 중 최소 값으로
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

// 8x8 프레이므올 전체 타일 위를 탐색하며 바꿔야할 최소 타일 개수 연산
int move_and_retouch(vector<string> tiles, int n, int m)
{
	int min_touch = -1;
	int i = 0, j = 0;
	while (i <= n - 8) {
		j = 0;
		while (j <= m - 8) {
			int temp = retouch(tiles, i, j);
			if (min_touch == -1) // 첫 값으로 min touch 초기화
				min_touch = temp;
			if (min_touch > temp) // 최소값으로 업데이트
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