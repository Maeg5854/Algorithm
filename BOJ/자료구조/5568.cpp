/* Baekjoon Online Judge
*  5568번 : 카드놓기
*  - 자료구조
*  - 2022.02.23
*/
#include <iostream>
#include <vector>

using namespace std;

int solution(int k, const vector<int>& in_nums)
{
	vector<int> nums = vector<int>(in_nums);
	vector<int> combs;
	
	
	
	return combs.size();
}

int main()
{
	int n;
	int k;
	vector<int> nums;

	/* 입력 */
	cin >> n >> k; 
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}

	/* 출력 */
	cout << solution(k, nums) << endl;
}