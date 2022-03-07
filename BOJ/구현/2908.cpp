/*
* 2908 : »ó¼ö
* 2022.03.03.
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a, b;
	int a_=0, b_=0;
	cin >> a >> b;
	while (a % 10 > 0)
	{
		a_ = a_ * 10 + a % 10;
		a /= 10;
	}
	while (b % 10 > 0)
	{
		b_ = b_ * 10 + b % 10;
		b /= 10;
	}
	cout << max(a_, b_);
}