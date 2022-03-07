/*
* 1152 : 단어의 개수
* 2022.03.02.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
	int cnt = 0;

	if (input.empty())
	{
		cout << "0";
		return 0;
	}
	
	cnt = 1;

	for (auto i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			cnt++;		
		}
	}
	if (input[0] == ' ') cnt--;
	if (input[input.length()-1] == ' ') cnt--;
	cout << cnt;
}