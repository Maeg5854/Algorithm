/*
* 11050: ���װ��1
* 2022.03.07
*/
#include <iostream>
using namespace std;

// nCk �� ���ϴ� �Լ�! ���丮���� �ʹ� �����ɸ��ϱ�
// �Ľ�Į�� �ﰢ���� Ư¡�� �̿��ؼ� Ǯ���!
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