/*
* 15829 : Hashing
* 2022.03.07.
*/
#include<string>
#include<iostream>
#include<cmath>
int m = 1234567891;
using namespace std;

int hasing(int l, string s)
{
	long long sum = 0;
	long long r = 1;
	for (auto i = 0; i < l; i++)
	{
		char alpha = s[i] - 'a' + 1;
		sum += (long long)alpha * r;
		if (sum > m) sum = sum % m; // 1번 원리 적용
		r = r * 31;
		if (r > m) r = r % m; // 3번 원리 적용
	}
	if (sum > m)
		sum %= m;
	return sum;
}

int main()
{
	int l;	
	string s;
	cin >> l >> s;
	cout << hasing(l, s);
}