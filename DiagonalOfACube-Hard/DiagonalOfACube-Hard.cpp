//Author : Abdulhamid Shahade
//Created: Aug 31, 2024
//Problem Link: https://edabit.com/challenge/uEiTAhNN6HgESspWb


#include<iostream>
#include<iomanip>
using namespace std;

double cubeDiagonal(double volume) {

	double side = pow(volume, 1 / 3.0);
	return side * pow(3, 1 / 2.0);
}

double readDouble() {

	double number = 0.0;
	cin >> number;
	return number;
}

int main() {

	double volume = readDouble();

	cout << fixed << setprecision(2) << cubeDiagonal(volume) << endl;

	return 0;
}