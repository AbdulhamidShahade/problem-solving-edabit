//Author : Abdulhamid Shahade
//Created: Sep 7, 2024
//Problem Link: https://edabit.com/challenge/868Q9JmTSAEhZBBrg

#include<iostream>
#include<vector>
using namespace std;

string tweakLetters(string str, vector<int> positions) {

	for (int i = 0; i < str.size(); ++i) {

		if (positions[i] == 1) {

			if (str[i] == 'z') {

				str[i] = 'a';
			}
			else {

				str[i] = (int)str[i] + 1;
			}
		}

		else if (positions[i] == -1) {

			if (str[i] == 'a') {

				str[i] = 'z';
			}
			else {

				str[i] = (int)str[i] - 1;
			}
		}
	}

	return str;
}

int main() {

	string str = "";
	cin >> str;

	int size = str.size();

	vector<int> pos(size);

	for (int i = 0; i < size; ++i) {

		cin >> pos[i];
	}

	cout << tweakLetters(str, pos);

	return 0;
}