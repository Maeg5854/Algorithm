/* Baekjoon Online Judge
*  1021번 : 회전하는 큐
*  - 자료구조
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
		
		// 2번 연산, 3번 연산 수행필요
		if (dist > 0)
		{
			result += min(dist, n - dist); // 2,3중 짧은 거리로 이동
			current = pick;
		}

		
		// 1번 연산
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
	
	// 입력을 받는다.
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		pick.push_back(temp);
	}

	cout << count_move(n, pick) << endl;

}