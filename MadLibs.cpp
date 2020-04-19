//MadLibs
//Author: Camren Carter
//Date: 4/19/2020

#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main() {
	string color, est, part, animal, noun, plural;
	int a, b = rand() % 100, c;

	cout << "enter a color: ";
	cin >> color;

	cout << "enter a word: ";
	cin >> est;

	cout << "enter a body part: ";
	cin >> part;

	cout << "enter a animal: ";
	cin >> animal;

	cout << "enter a noun: ";
	cin >> noun;

	cout << "enter another noun: ";
	cin >> plural;

	cout << "enter you favorite number: ";
	cin >> a;

	c = abs((a - b));

	cout << "The " << color << " Dragon is the " << est << "est of all. It has "
		<< c << " " << part << "s, and a " << animal << " shaped like a " << noun
		<< ". It loves to eat " << plural << "s, although it will feast on nearly anything.\n";

	system("Pause");
	return(0);
}