/* Baekjoon Online Judge
*  1927번 : 최소힙
*  - 자료구조
*  - silver2
*  - 2022.02.23
*/
#define SWAP(a,b) {int t; t=a; a=b; b=t;}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<long> vec;
	vector<long> result;
	cin >> n;
	
	while (n-- > 0)
	{
		long tmp;
		cin >> tmp;
		if (tmp == 0)
		{
			long value;
			if (vec.size() == 0) value = 0;
			else
			{
				long minimum;
				value = vec.front();
				vec[0] = vec[vec.size() - 1];
				vec.pop_back();

				
			}
			result.push_back(value);
		}
		else
		{
			int idx, parent_idx;
			long parent;
			// 1. append
			vec.push_back(tmp);
			
			// 2. swap until stisfying the condition of min heap
			idx = vec.size()-1;
			parent_idx = (idx - 1) / 2;
			if (parent_idx < 0) continue;
			parent = vec[parent_idx];

			while(vec[idx] < parent)
			{
				long tmp;
				tmp = parent;
				vec[parent_idx] = vec[idx];
				vec[idx] = tmp;
				
				cout << "swap: "<< vec[idx] << " and " << vec[parent_idx] << "\n";
				idx = parent_idx;
				parent_idx = (idx - 1) / 2;

				if (parent_idx < 0) break;
				
				parent = vec[parent_idx];
			}
		}		
	}

	for (auto el : result)
		cout << el << '\n';
}