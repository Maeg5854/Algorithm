/*
* 2869: 달팽이는 올라가고 싶다
* 2022.03.07
* Trial 1 : 시간 초과 => 반복문을 없애고 구할 수는 없을까?
* Trial 2 : 성공!
*/
#include <iostream>
using namespace std;

void snail1(int a, int b, int v)
{
	int d = 0;
	while ((a - b) * d + b < v) // 이 식을 d에 관한 방정식으로 변형하자!
	{
		d++;
	}
	cout << d;
}

void snail2(int a, int b, int v)
{
	int d = ((v - b)% (a - b) == 0) ?
		((v - b) / (a - b)):
		((v - b) / (a - b) + 1);
	cout << (d);
}

int main()
{
	int a, b, v;
	cin >> a >> b >> v;

	//snail1(a, b, v);
	snail2(a, b, v);
}