/*
* 2839 : 설탕 배달
* 2022.03.07.
* 그리디 알고리즘
*/
#include <iostream>
using namespace std;

// 5kg 봉지를 최대한 많이 써야한다.
// 1) 5kg으로 나눠본다 -> 나누어 떨어지면 그대로 출력 -> 아니면 2)로 이동
// 2) 5kg으로 나눠본다 ->
int sugarbag(int n)
{
	int a = n / 5; // 5kg 가방의 개수
	int b;
	while (true)
	{
		if (a < 0)
			return -1;
		if ((n - 5 * a) % 3 == 0)
		{
			b = (n - 5 * a) / 3;
			break;
		}
		a--; // 나머지가 3으로 나누어떨어지지 않는다면 5kg를 하나 줄인다.
	}
	return a + b;
}

int main()
{
	int n;
	cin >> n;
	cout << sugarbag(n);
}