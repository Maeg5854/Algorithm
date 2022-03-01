/*
* 18310번 : 안테나
* 2022.03.01.
* - 중간값을 리턴하는 문제.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
* @return int : 안테나를 설치할 집
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