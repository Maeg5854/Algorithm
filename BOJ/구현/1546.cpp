/*
* 1546 : ЦђБе
* 2022.03.02.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	double max = 0.;
	double sum = 0.;
	vector<double> score;

	cin >> n;
	while (n-- > 0)
	{
		double temp;
		cin >> temp;
		score.push_back(temp);
		if (temp > max) max = temp;
	}

	for (auto i = 0; i < score.size(); i++)
	{
		sum += score[i] / max * 100.;
	}
	cout << sum / double(score.size());
}