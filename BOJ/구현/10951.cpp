/*
* 10951 : A+B - 4
* 2022.03.03.
* => 입력의 개수가 주어지지 않았을때
* => 마지막 값까지 읽고, 그 다음에 읽을 때 EOF 발생.
* => scanf("%d %d", &a, &b) != -1 : scanf는 포맷에 알맞게 입력이 들어오면 입력의 개수를 반환 => 정상이면 2을 반환
* => while(!(cin>>a >>b).eof()) (O) while(!cin.eof()) (X)
*	읽기 시도를 한 후에 eof()를 해야한다.
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