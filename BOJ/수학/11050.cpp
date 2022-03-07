/*
* 11050: 이항계수1
* 2022.03.07
*/
#include <iostream>
using namespace std;

// nCk 를 구하는 함수! 팩토리얼은 너무 오래걸리니까
// 파스칼의 삼각형의 특징을 이용해서 풀어보자!
int binary_coef(int n, int k)
{
	if (n == 1) return 1;
	if (k == 0 || k == n) return 1;

	return binary_coef(n - 1, k) + binary_coef(n - 1, k - 1);
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << binary_coef(n, k) << '\n';
}