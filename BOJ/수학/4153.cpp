/*
* 4153 : Á÷°¢»ï°¢Çü
* 22.03.05
*/
#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
	array<int,3> a;
	while ((cin >> a[0] >> a[1] >> a[2]))
	{
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;

		sort(a.begin(), a.end());
		if (a[2] * a[2] == a[1] * a[1] + a[0] * a[0])
			cout << "right"<<'\n';
		else
			cout << "wrong" << '\n';
	}

	return 0;
}