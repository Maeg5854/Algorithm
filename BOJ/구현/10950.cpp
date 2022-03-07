/*
* 10950 : A+B - 3
* 2022.03.03.
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	vector<int> results;
	cin >> t;

	while (t-- > 0)
	{
		int a, b;
		cin >> a >> b;
		results.push_back(a +b);
	}

	for (auto r : results)
		cout << r << '\n';

}