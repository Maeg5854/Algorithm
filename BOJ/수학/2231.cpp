/*
* 2231 : ºÐÇØÇÕ
* 22.03.05
*/
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,c=0;
	int sum;
	bool constExist = false;
	cin >> n;
	while (i <= n)
	{
		int temp = i;
		sum = i;
		while (temp)
		{
			sum = sum+ temp % 10;
			temp = temp/ 10;
		}
		if (sum == n)
		{
			c=i;
			break;
		}
		i++;
	}

	cout << c;
	return 0;
}