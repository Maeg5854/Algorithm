/* Baekjoon Online Judge
*  1764번 : 듣보잡
*  - 자료구조
*  - 2022.02.23
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	int i=0, j=0;
	vector<string> v1; // 듣도 못한 사람
	vector<string> v2; // 보도 못한 사람
	vector<string> result; // 듣도 보도 못한 사람
	cin >> n >> m;

	while (n-- > 0)
	{
		string tmp;
		cin >> tmp;
		v1.push_back(tmp);
	}
	while (m-- > 0)
	{
		string tmp;
		cin >> tmp;
		v2.push_back(tmp);
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	while (i < v1.size() && j < v2.size())
	{
		if (v1[i] > v2[j])
			j++;
		else if (v1[i] < v2[j])
			i++;
		else // 문자열이 동일한 경우
		{
			result.push_back(v1[i]);
			i++; j++;
		}
	}

	cout << result.size() << '\n';
	for (auto el : result)
		cout << el << "\n";
}