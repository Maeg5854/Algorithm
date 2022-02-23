/* Baekjoon Online Judge
*  2164번 : 카드2
*  - 자료구조
*  - 2022.02.23
*/

#include <queue>
#include <iostream>

using namespace std;

int card2(int n)
{
	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);
	
	while (q.size() > 1)
	{
		int tmp;
		q.pop();
		tmp = q.front();
		q.pop();
		q.push(tmp);
	}
	return q.front();
}

int main()
{
	int n;
	cin >> n;

	cout << card2(n);
}