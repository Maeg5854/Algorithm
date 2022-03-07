/*
* 2839 : ���� ���
* 2022.03.07.
* �׸��� �˰���
*/
#include <iostream>
using namespace std;

// 5kg ������ �ִ��� ���� ����Ѵ�.
// 1) 5kg���� �������� -> ������ �������� �״�� ��� -> �ƴϸ� 2)�� �̵�
// 2) 5kg���� �������� ->
int sugarbag(int n)
{
	int a = n / 5; // 5kg ������ ����
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
		a--; // �������� 3���� ����������� �ʴ´ٸ� 5kg�� �ϳ� ���δ�.
	}
	return a + b;
}

int main()
{
	int n;
	cin >> n;
	cout << sugarbag(n);
}