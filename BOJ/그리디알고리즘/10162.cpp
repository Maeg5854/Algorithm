#include <iostream>
#include<array>
using namespace std;


auto solution(int t)
{
	array<int, 3> btn = { 300,60,10 };
	array<int, 3> count = {0,0,0};
	
	for (auto i=0;i<3;i++)
	{
		while (t >= btn[i])
		{
			t -= btn[i];
			count[i]++;
		}
	}

	if (t != 0)
		return array<int,3>{-1,-1,-1};
	else
		return count;
}
int main()
{
	int t;
	array<int, 3> result;
	cin >> t;
	
	result = solution(t);
	if (result[0] == -1)
		cout << -1;
	else
	{
		for (auto r : result)
			cout << r << " ";
	}
}