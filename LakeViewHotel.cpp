//Lake View Hotel
//Author: Camren
//Date: 4/19/2020

#include<iostream>
#include<string>
using namespace std;

int main() {
	double night, service, tele;
	double total;

	cout << "How many nights did you stay: ";
	cin >> night;

	cout << "How many times did you use room service: ";
	cin >> service;

	cout << "How many minutes did tou use the telephone: ";
	cin >> tele;

	total = (night * 100) + (service * 35) + (tele * 0.25);

	cout << "Your total is: $" << total << "\n";
	
	system("Pause");
	return 0;
}