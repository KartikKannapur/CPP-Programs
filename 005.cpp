//Program 005.cpp - Using cin for user input

#include <iostream>
using namespace std;

int main() {
	int var;
	
	cout << "How many apples do you have? \n";
	cin >> var;
	var += 2;
	cout << "Now you have 2 more: " << var;
	return 0;
}
