/* Baekjoon Online Judge
*  1158번 : 요세푸스 문제
*  - 자료구조
*  - 2022.02.23
*/
#include <iostream>
#include <vector>
#include<array>
#include <algorithm>

using namespace std;

void josephus(const int N, const int K)
{
	vector<int> vec;
	vector<int> result;

	int idx = 0;
	for (int i = 1; i <= N; i++)
		vec.push_back(i);
	
	while (vec.size() != 0)
	{
		idx = (idx + K - 1) % vec.size();
		result.push_back(vec[idx]);
		vec.erase(vec.begin() + idx);
	}
	
	cout << "<" << *(result.begin());
	if (result.size() > 1)
	{
		for (auto iter = result.begin() + 1; iter < result.end(); iter++)
		{
			cout << ", " << *iter;
		}
		
	}
	cout << ">";
}

int main()
{
	int n, k;
	cin >> n >> k;
	josephus(n, k);
}