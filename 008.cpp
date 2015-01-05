//Program 008.cpp - Understanding data types

#include <iostream>
#include <climits>
using namespace std;

int main() {

	int myInt = INT_MAX;
	short myShort = SHRT_MAX;
	long myLong = LONG_MAX;
	
	cout << "Size of: " << sizeof(myInt) << " " << sizeof(myShort) <<" " << sizeof(myLong) << endl; 
	cout << "Value of: " << (myInt) <<" " << (myShort) <<" " << (myLong);
	
	return 0;
}
