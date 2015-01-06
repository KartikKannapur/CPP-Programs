//Program 12.cpp - Unions

#include <iostream>
using namespace std;

union myUnion
{
	int val1;
	int val2;
	char mychar;
};

int main() {
	//Unions can take only 1 value at a time
	myUnion hello = {1};
	cout << hello.val1;
	return 0;
}
