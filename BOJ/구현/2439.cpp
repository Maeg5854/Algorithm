/*
* 2439 : º° Âï±â -2
* 2022.03.03.
*/
#include<iostream>
int main()
{
	int n;
	std::cin >> n;
	for (auto i = 0; i < n; i++)
	{
		for (auto j = 0; j < n; j++)
		{
			if (i < n - j-1) std::cout << " ";
			else std::cout << "*";
		}
		std::cout << "\n";
	}
}