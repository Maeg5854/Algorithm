/*
* 1181 : 단어 정렬
* 2022.03.03.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const string& a, const string& b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}
void sorting_and_print(vector<string> w, int l)
{
	sort(w.begin(), w.end(),compare);
	string prv_str = *w.begin();
	for (auto i = 0; i < l; i++)
	{
		if (i == 0 || prv_str != w[i])
			cout << w[i]<<"\n";
		prv_str = w[i];
	}
}

int main()
{
	int n, temp;
	vector<string> w;
	cin >> n;
	temp = n;
	while (temp--)
	{
		string tmp;
		cin >> tmp;
		w.push_back(tmp);
	}
	sorting_and_print(w,n);
}