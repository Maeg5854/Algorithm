/*
* 2884 : 알람시계
* 2022.03.03.
*/
#include<iostream>

using namespace std;
int main()
{
	int h, m;
	bool h_cha;

	cin >> h >> m;

	if (m >= 45)
	{
		m -= 45;
		h_cha = false;
	}
	else
	{
		m = m - 45 + 60;
		h_cha = true;
	}

	if (h_cha)
		h -= 1;
	if (h < 0)
		h = 24 + h;
	cout << h << " " << m;
}