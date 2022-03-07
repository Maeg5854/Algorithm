/*
* 2475 : °ËÁõ¼ö
* 2022.03.03.
*/
#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	int temp;
	int sum_of_exp = 0;
	while (n-- > 0)
	{
		cin >> temp;
		sum_of_exp += temp*temp;
	}
	cout << (sum_of_exp % 10);
}