//Program 014.cpp - Pointers

#include <iostream>
using namespace std;

int main() {
	//Introduction to pointers
	int var = 5;
	cout << "The value stored in the variable is: " << var << endl;
	cout << "The address of the variable is: " << &var << endl;
	cout << "FooBar" << endl;
	
	int *ptr1;
	ptr1 = &var;
	cout << "The value of the variable is: " << var << endl;
	cout << "The pointer points to: " << ptr1 << endl;
	cout << "Using dereferencing to access the value: " << *ptr1 << endl;
	
	//Incrementing using the same pointer
	//*ptr is dereferencing and contains the value
	//Incrementing by 2
	*ptr1 = *ptr1 + 2;
	cout << "The address now is: " << ptr1 << endl;
	cout << "The value stored in it now is: " << *ptr1 << endl;
	
	cout << "Double FooBar";
	//Pointer to a pointer
	int *ptr2;
	ptr2 = ptr1;
	cout << "The address of ptr1 is: " << ptr2 << endl;
	cout << "The value stored in it is: " << *ptr2 << endl;
	return 0;
}
