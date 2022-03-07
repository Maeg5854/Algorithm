/*
* 2869: �����̴� �ö󰡰� �ʹ�
* 2022.03.07
* Trial 1 : �ð� �ʰ� => �ݺ����� ���ְ� ���� ���� ������?
* Trial 2 : ����!
*/
#include <iostream>
using namespace std;

void snail1(int a, int b, int v)
{
	int d = 0;
	while ((a - b) * d + b < v) // �� ���� d�� ���� ���������� ��������!
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