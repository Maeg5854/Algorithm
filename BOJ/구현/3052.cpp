/*
* 3052 : ³ª¸ÓÁö
* 2022.03.03.
*/
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n = 10;
	vector<int> result;
	while (n-- > 0)
	{
		int temp;
		cin >> temp;
		temp %= 42;
		auto it = find(result.begin(), result.end(), temp);
		if (it == result.end())
			result.push_back(temp);
		
	}
	cout << result.size();
}