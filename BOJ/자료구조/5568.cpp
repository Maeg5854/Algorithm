/* Baekjoon Online Judge
*  5568�� : ī�����
*  - �ڷᱸ��
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

	/* �Է� */
	cin >> n >> k; 
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}

	/* ��� */
	cout << solution(k, nums) << endl;
}