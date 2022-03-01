#include<iostream>
#include<vector>
#include<array>

using namespace std;

void solution(int c)
{
	array<int, 4> val = { 25, 10, 5, 1 };
	array<int, 4> count = { 0,0,0,0 };

	for (auto i=0;i<4;i++)
	{
		while (c >= val[i])
		{
			c -= val[i];
			count[i]++;
		}
	}
	
	for (auto c : count)
	{
		cout << c << " ";
	}
	cout << "\n";
}

int main()
{
	int n;
	vector<int> test_case;

	cin >> n;
	while (n-- > 0)
	{
		int temp;
		cin >> temp;
		test_case.push_back(temp);
	}

	for (auto i = 0; i < test_case.size(); i++)
	{
		solution(test_case[i]);
	}
}