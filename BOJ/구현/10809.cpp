/*
* 10809 : ¾ËÆÄºª Ã£±â
* 2022.03.03.
*/
#include <string>
#include <iostream>
#include <array>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	int alpha[26];
	fill_n(alpha, 26, -1);
	cin >> s;
	for (auto i = 0; i < s.length(); i++)
	{
		if (alpha[s[i] - 97] == -1)
			alpha[s[i] - 97] = i;
	}

	for (auto a : alpha)
		cout << a << " ";
	
}