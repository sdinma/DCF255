#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	string input = "011111101111110", flag = "01111110";
	int count = 0;
	cout << "Before Stuffing: " << input << " -- " << input.size() << " characters" << endl;
	for (int i = 0; i < input.size(); i++)
	{
		input[i] == '1' ? count++ : count = 0;
		if (count == 5 && (input[i - 5] == '0'))
		{
			input.insert(i + 1, "0");
			count = 0;
		}
	}
	cout << "After Stuffing: " << input << " -- " << input.size() << " characters" << endl;
	input.insert(0, flag);
	input.append(flag);
	cout << "After framing:" << input << endl;
}

