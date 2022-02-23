/* Baekjoon Online Judge
*  7785번 : 회사에 있는 사람
*  - 자료구조
*  - 2022.02.23
*/
#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
	set<string> s;
	int n;
	cin >> n;
	/* 로그 기록 조사 */

	while (n--)
	{
		string name, action;
		cin >> name >> action;
		if (action == "enter")
			s.insert(name);
		else
			s.erase(name);
	}
	
	for (auto it = s.rbegin(); it != s.rend(); it++) {
		cout << *it << '\n'; // std::endl은 '\n'보다 느리다.
	}
	return 0;
}