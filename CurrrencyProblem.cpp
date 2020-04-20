//Currency Problem
//Author: Camren Carter
//Date: 4/20/2020

#include<iostream>
#include<string>
using namespace std;

int main() {

	double amount, pound, pesos, yen;

	cout << "What amount of money are you converting: ";
	cin >> amount;

	pound = amount * 0.80;
	pesos = amount * 24.15;
	yen = amount * 107.67;

	cout << pound << " pounds.\n" << pesos << " pesos\n" << yen << " yen";
}