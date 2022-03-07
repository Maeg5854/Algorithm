/*
* 2739 : ±¸±¸´Ü
* 2022.03.02.
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (auto i = 1; i <= 9; i++)
	{
		cout << n << " * " << i << " = " << i * n << "\n";
	}
}