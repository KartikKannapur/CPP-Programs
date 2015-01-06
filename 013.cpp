//Program 13.cpp - Enumeration

#include <iostream>
using namespace std;

//Data type enumeration
enum color
{
	//Enumerators with pre-defined indexes
	red, orange, yellow, green, blue, indigo, violet
};

enum myColor
{
	one = 10, two = 20, three = 30, four = 40, five = 50
};
int main() {
	color helloWorld;
	
	helloWorld = red;
	cout << helloWorld << endl;
	helloWorld = orange;
	cout << helloWorld << endl;
	
	cout << "FooBar" << endl;
	
	myColor helloFooBar;
	
	helloFooBar = one;
	cout << one << endl;
	helloFooBar = two;
	cout << two << endl;
	return 0;
}
