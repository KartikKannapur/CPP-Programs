//Program 006.cpp - Function prototype & Function call

#include <iostream>
using namespace std;

//Function Prototype
int add(int a, int b);

int main() {
	
	add(5,3);
	return 0;
}

//Function definition
int add(int a, int b)
{
	cout << a+b << endl;
	return 0;
}

//The function definition and the prototype can be combined and placed above
//the main() function
