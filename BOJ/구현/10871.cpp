/*
* 10871 : X보다 작은 수
* 2022.03.03.
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, x;
	vector<int> a;
	cin >> n >> x;

	while (n-- > 0)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

	for (auto el : a)
	{
		if (el < x)
			cout << el << " ";
	}
}