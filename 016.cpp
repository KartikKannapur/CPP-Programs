//Program 016.cpp - Using 'delete' to free up unused memory space & memory management

#include <iostream>
using namespace std;

int main() {
	//Pointer declaration
	int *ptr;
	//Using 'new' to obtain a block of space in the memory
	ptr = new int;
	
	*ptr = 69;
	cout << "The value: " << *ptr << " is stored in: " << ptr << endl;
	//Free up the unused-memory
	delete ptr;
	//To show that delete does not delete the pointer, but frees up memory
	//We print out the memory address of the pointer
	cout << ptr;
	return 0;
}
