/*
* 10952 : A+B - 5
* 2022.03.03.
*/

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
			break;
		cout << a + b << '\n';
	}
}