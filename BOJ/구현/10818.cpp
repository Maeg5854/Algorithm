/*
* 10818 : �ּ�, �ִ�
* 2022.03.03.
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	int max, min;
	int temp;
	cin >> n;
	
	// ù��° ������ min/max �ʱ�ȭ
	cin >> max;
	min = max;
	
	if (n > 1)
	{
		for (auto i = 1; i < n; i++)
		{
			cin >> temp;
			if (temp > max) max = temp;
			if (temp < min) min = temp;
		}
	}

	cout << min << " " << max;
	return 0;
}