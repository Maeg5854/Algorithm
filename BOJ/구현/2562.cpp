/*
* 2562 : ÃÖ´ñ°ª
* 2022.03.02.
*/
#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	int max = 0;
	int max_idx = 0;
	for (i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		if (max < temp)
		{
			max = temp;
			max_idx = i;
		}
	}
	cout << max << '\n' << max_idx + 1;
}