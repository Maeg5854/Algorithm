#include <iostream>
#include <string>
#include <array>
#define N 1000000
using namespace std;

// 아스키 코드 : 대문자 65~90, 소문자 97~122
int main()
{
	string input;
	array<int, 26> count = array<int,26>{0};
	bool maxes_ = false;
	cin >> input;

	for (auto i = 0; i < input.length(); i++)
	{
		if (input[i] < 97) count[input[i] - 65]++; // 대문자 일 때
		else count[input[i] - 97]++; // 소문자
	}
	
	int max = 0, max_idx = 0;
	
	for (auto i = 0; i < 26; i++) {
		if (count[i] > max) {
			max = count[i];
			max_idx = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == count[i] && max_idx != i) {
			maxes_ = true;
			break;
		}
	}

	if (maxes_) cout << "?";
	else cout << (char)(max_idx + 65);
}