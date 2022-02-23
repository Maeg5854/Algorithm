/* Baekjoon Online Judge
*  1021�� : ȸ���ϴ� ť
*  - �ڷᱸ��
*  - 2022.02.23
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int count_move(int n, vector<int>& picks)
{
	int current = 1;
	int result = 0;
	while (picks.size() != 0)
	{
		int pick = picks.front();
		int dist = abs(current - pick);
		
		// 2�� ����, 3�� ���� �����ʿ�
		if (dist > 0)
		{
			result += min(dist, n - dist); // 2,3�� ª�� �Ÿ��� �̵�
			current = pick;
		}

		
		// 1�� ����
		if (current == pick)
		{
			picks.erase(picks.begin());
			n--;
			for (int i = 0; i < picks.size(); i++)
			{
				if (picks[i] > current)
					picks[i]--;
			}
		}
	}
	return result;
}

int main()
{
	int n, m;
	vector<int> pick;
	
	cin >> n >> m;
	
	// �Է��� �޴´�.
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		pick.push_back(temp);
	}

	cout << count_move(n, pick) << endl;

}