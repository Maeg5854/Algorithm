/*
* 2920 : À½°è
* 2022.03.02.
*/
#include <iostream>
#include <array>

using namespace std;

enum state {
	ascending,
	descending,
	mixed
};
int main()
{
	array<int, 8> snd;
	state st;

	cin >> snd[0];
	if (snd[0] != 8 && snd[0] != 1)
		st = state::mixed;
	else
	{
		if (snd[0] == 1)
			st = state::ascending;
		else
			st = state::descending;

		for (auto i = 1; i < 8; i++)
		{
			cin >> snd[i];
			if ((snd[i] == snd[i - 1] + 1 && st == state::ascending) || (snd[i] == snd[i - 1] - 1 && st == state::descending)) {}
			else
				st = state::mixed;
		}
	}

	if (st == state::mixed)
		cout << "mixed";
	else if (st == state::ascending)
		cout << "ascending";
	else if (st == state::descending)
		cout << "descending";
}