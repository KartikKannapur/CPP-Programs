//Program 009.cpp - Constants and Undefined data type

#include <iostream>
#include <climits>
using namespace std;

#define value 5;

int main() {
	cout << value;
	
	unsigned int x;
	x = INT_MAX;
	
	cout << "\n Size Of: "  << sizeof(x);
	cout << "\n Value Of: "  << (x);
	return 0;
}
