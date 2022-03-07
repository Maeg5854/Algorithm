/*
* 11720 : 숫자의 합
* 2022.03.03.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

	/* 내가 작성한 코드
	int n,sum=0;
	string inp;
	cin >> n >> inp;

	for (auto i = 0; i < n; i++)
	{
		sum += (int)(inp[i])-48;
	}
	cout << sum;*/

	int a;
	int b, i, c = 0;
	scanf("%d", &b);
	for (i = 0; i < b; i++)
	{
		scanf("%1d", &a); // 한 자리 씩 입력 받을 수 있다.
		c = c + a;
	}
	printf("%d", c);
}