/*
* 10250 : ACM хёез
* 22.03.05
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int t;
	int h, w, n;
	int floor;
	int room;
	cin >> t;
	while (t-- > 0)
	{
		cin >> h >> w >> n;
		floor = (n % h == 0) ? h : (n % h);
		room = (n%h==0)? (n/h) : (n / h + 1);
		printf("%d%02d\n", floor, room);
	}

}