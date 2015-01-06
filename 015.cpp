//Program 015.cpp - using 'new' for memory allocation

#include <iostream>
using namespace std;

int main() {
	//You tell 'new' that you want memory of a particular data type.
	//New creates that much space in memory and returns the address of that
	//memory location.
	//You assign that address to a pointer.
	//Done.
	
	int *ptr;
	ptr = new int;
	
	cout << "The address of the new memory location is: " << ptr << endl;
	cout << "The value stored at that address is: " << *ptr << endl;
	//Now the pointer points to a data object
	
	//We assign the value 69 to *ptr via dereferencing
	*ptr = 69;
	cout << "The value: " << *ptr << " is stored in: " << ptr << endl;
	
	return 0;
}
