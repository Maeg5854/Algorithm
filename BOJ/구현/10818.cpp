/*
* 10818 : 최소, 최대
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
	
	// 첫번째 정수로 min/max 초기화
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