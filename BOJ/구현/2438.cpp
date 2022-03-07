/*
* 2438 : º° Âï±â - 1 
* 2022.03.02.
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (auto i = 1; i <= n; i++)
	{
		int star = i;
		while (star-- > 0)
			cout << "*";
		cout << "\n";
	}
}