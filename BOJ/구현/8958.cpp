/*
* 8958 : OXÄûÁî
* 2022.03.02.
*/

#include <string>
#include <iostream>
#include <vector>

using namespace std;
int solution(string inp)
{
	int bonus = 0;
	int sum = 0;

	for (auto i = 0; i < inp.length(); i++)
	{
		if (inp[i] == 'O')
			sum += ++bonus;
		else
			bonus = 0;
	}

	return sum;
}


int main()
{
	int n;
	vector<int> result;
	cin >> n;

	while (n-- > 0)
	{
		string inp;
		cin >> inp;
		result.push_back(solution(inp));
	}
	for (auto r : result)
		cout << r << '\n';
}

