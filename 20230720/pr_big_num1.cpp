#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

string solution(vector<int> numbers) {
	vector<int> dumy(numbers);
	int digit = 0;
	int single_digit = 0;
	string answer = "";
	string max_num = to_string(*max_element(numbers.begin(), numbers.end()));
	digit = max_num.length();
	for (int i = 0; i < numbers.size(); i++)
	{
		single_digit = 0;
		for (int j = 0; j < digit; j++)
		{
			if (dumy.at(i) < pow(10, digit - 1))
			{
				if (single_digit == 0)
					single_digit = dumy.at(i) % 10;
				dumy.at(i) *= 10;
				dumy.at(i) += single_digit;
			}
		}
	}

	for (int i = 0; i < numbers.size() - 1; i++)
	{
		for (int j = 0; j < numbers.size() - 1 - i; j++)
		{
			if (dumy[j] < dumy[j + 1])
			{
				int temp = dumy[j];
				dumy[j] = dumy[j + 1];
				dumy[j + 1] = temp;
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < numbers.size(); i++)
	{
		answer += to_string(numbers[i]);
	}
	return answer;
}