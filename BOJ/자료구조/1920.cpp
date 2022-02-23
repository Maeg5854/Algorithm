/* Baekjoon Online Judge
*  1920번 : 수 찾기
*  - 자료구조
*  - 2022.02.23
*/
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	set<int> a;
	vector<int> b;
	vector<bool> result;
	cin >> n;
	while (n-- > 0)
	{
		int tmp;
		cin >> tmp;
		a.insert(tmp);
	}
	cin >> m;
	while (m-- > 0)
	{
		int tmp;
		cin >> tmp;
		b.push_back(tmp);
		
	}
	m++;
	while (m < b.size())
	{
		auto it = a.find(b[m]);
		if (it != a.end())
			result.push_back(true);
		else
			result.push_back(false);
		m++;
	}

	for (auto el : result)
		cout << el << "\n";
}