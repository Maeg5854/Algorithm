/*
* 2292 : ¹úÁı
* 22.03.05
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 1;
	int cnt = 1;
	cin >> n;

	for (sum = 1; sum < n; cnt++)
	{
		sum += 6 * cnt;
	}
	cout << cnt;
}