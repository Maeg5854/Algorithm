/*
* 1085 : 직사각형에서 탈출
* 22.03.05
*/
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x, y, w, h;
	int min_x, min_y;
	cin >> x >> y >> w >> h;

	min_x = min(x, w - x);
	min_y = min(y, h - y);

	cout << min(min_x, min_y);
	return 0;

}