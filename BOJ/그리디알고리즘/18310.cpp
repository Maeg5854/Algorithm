/*
* 18310�� : ���׳�
* 2022.03.01.
* - �߰����� �����ϴ� ����.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
* @return int : ���׳��� ��ġ�� ��
*/
void solution(vector<int> hs, int n)
{
	sort(hs.begin(), hs.end());
	if (n % 2 == 1)
		cout << hs[n / 2];
	else
		cout << hs[n / 2 - 1];
}

int main()
{
	int n,n_;
	vector<int> house;

	cin >> n;
	n_ = n;
	while (n-- > 0)
	{
		int tmp;
		cin >> tmp;
		house.push_back(tmp);
	}
	
	solution(house,n_);
}