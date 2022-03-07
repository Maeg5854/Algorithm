/*
* 1259 : ÆÓ¸°µå·Ò¼ö
* 2022.03.07.
*/
#include<iostream>
#include <string>
#define endl '\n'
using namespace std;

void palindrome(string inp)
{
	bool isPalindrome = true;
	for (int i = 0; i < inp.length()/2; i++)
	{
		if (inp[i] != inp[inp.length() - i - 1])
		{
			isPalindrome = false;
			break;
		}
	}
	if (isPalindrome)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}
int main()
{
	string inp;
	
	while (true)
	{
		cin >> inp;
		if (inp[0] == '0')
			break;
		palindrome(inp);
	}
}