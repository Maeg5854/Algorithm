/*
* 10951 : A+B - 4
* 2022.03.03.
* => �Է��� ������ �־����� �ʾ�����
* => ������ ������ �а�, �� ������ ���� �� EOF �߻�.
* => scanf("%d %d", &a, &b) != -1 : scanf�� ���˿� �˸°� �Է��� ������ �Է��� ������ ��ȯ => �����̸� 2�� ��ȯ
* => while(!(cin>>a >>b).eof()) (O) while(!cin.eof()) (X)
*	�б� �õ��� �� �Ŀ� eof()�� �ؾ��Ѵ�.
*/
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	vector<int> result;
	while (cin >> a >> b)
	{
		cout << a + b << '\n';
	}

}