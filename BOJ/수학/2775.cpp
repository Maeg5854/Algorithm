/*
* 2775 : 부녀회장이 될거야
* 22.03.07
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GetCount(int k, int n)
{
	if (n == 1)
		return 1;
	if (k == 0)
		return n;

	return (GetCount(k - 1, n) + GetCount(k, n - 1));
}

int main()
{
	int t;
	int k, n;
	cin >> t;

	while (t-- > 0)
	{
		cin >> k >> n;
		cout << GetCount(k, n) << "\n";
	}
}