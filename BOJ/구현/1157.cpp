#include <iostream>
#include <string>
#include <array>
#define N 1000000
using namespace std;

// �ƽ�Ű �ڵ� : �빮�� 65~90, �ҹ��� 97~122
int main()
{
	string input;
	array<int, 26> count = array<int,26>{0};
	bool maxes_ = false;
	cin >> input;

	for (auto i = 0; i < input.length(); i++)
	{
		if (input[i] < 97) count[input[i] - 65]++; // �빮�� �� ��
		else count[input[i] - 97]++; // �ҹ���
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