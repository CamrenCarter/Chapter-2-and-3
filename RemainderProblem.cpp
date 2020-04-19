//Remainder Problem
//Author: Camren Carter
//Date: 4/19/2020

#include<iostream>
#include<string>
using namespace std;

int main() {
	int amount, eggs, dozens;
	float price;

	cout << "How many eggs do you want: ";
	cin >> amount;

	dozens = (amount / 12);
	eggs = (amount % 12);

	price = (dozens * 2) + (eggs * 0.25);

	cout << "You have bought: " << dozens << " dozen(s) and " << eggs
		<< " egg(s). The total price is $" << price << "\n";

	system("Pause");
	return 0;
}