//Program 007.cpp - Function that returns a value and a function that doesn't

#include <iostream>
using namespace std;

//Function that returns a value
int func_return(int a, int b);

//Function that does not return a value
void func_no_return(int a, int b);

int main() {
	int var_return;
	
	var_return = func_return(5,3);
	cout << var_return;
	
	cout << "\n\n\n";
	
	func_no_return(5,3);
	return 0;
}

//Function that returns a value
int func_return(int a, int b)
{
	cout << "I return a value" << endl;
	return a+b;
}

//Function that doesn't return a value
void func_no_return(int a, int b)
{
	cout << "I don't return any value, I just print it!" << endl;
	cout << a+b;
}
