/*
* 2675 : 문자열 반복
* 2022.03.02.
*/
#include <vector>
#include <iostream>
#include<string>
using namespace std;

struct test
{
	int r;
	string str;
	string result;
};

int main()
{
	int t;
	vector<test> tests;
	cin >> t;
	while (t-- > 0)
	{
		int r;
		string str;
		cin >> r >> str;
		tests.push_back(test{ r,str});
	}
	
	for (auto t : tests)
	{
		for (auto i = 0; i < t.str.length(); i++)
		{
			for (auto j = t.r; j > 0; j--)
				t.result.push_back(t.str[i]);
		}
		cout << t.result << '\n';
	}
}