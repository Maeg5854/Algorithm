/*
* 2798 : ∫Ì∑¢¿Ë
* 2022.03.03.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Blackjack(int n, int m, vector<int> card)
{
	int max_less_than_m=0;
	for (auto i = 0; i < n - 2; i++)
	{
		for (auto j = i + 1; j < n - 1; j++)
		{
			for (auto k = j + 1; k < n; k++)
			{
				int sum = card[i] + card[j] + card[k];
				if (max_less_than_m < sum && sum <= m)
				{
					max_less_than_m = card[i] + card[j] + card[k];
				}
			}
		}
	}
	return max_less_than_m;
}

int main()
{
	int n, m;
	int temp;
	vector<int> card;
	
	cin >> n >> m;
	for (auto i = 0; i < n; i++)
	{
		cin >> temp;
		card.push_back(temp);
	}
	
	cout << Blackjack(n, m, card) << "\n";
}