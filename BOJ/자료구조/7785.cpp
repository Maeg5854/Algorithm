/* Baekjoon Online Judge
*  7785�� : ȸ�翡 �ִ� ���
*  - �ڷᱸ��
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
	/* �α� ��� ���� */

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
		cout << *it << '\n'; // std::endl�� '\n'���� ������.
	}
	return 0;
}