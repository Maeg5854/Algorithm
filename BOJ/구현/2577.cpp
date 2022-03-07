/*
* 2577 : 숫자의 개수
* 2022.03.02.
*/
#include <iostream>
#include <array>
using namespace std;
int main()
{
	int a, b, c;
	unsigned int gob;
	array<int, 10> cnt = array<int,10>{0};
	cin >> a >> b >> c;
	gob = a * b * c;

	while (gob > 0)
	{
		cnt[gob % 10]++;
		gob /= 10;
	}
	for (auto c : cnt)
		cout << c <<'\n';
	
}