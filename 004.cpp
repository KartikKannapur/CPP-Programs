//Program 004.cpp - Using endl

#include <iostream>
using namespace std;

int main() {
	
	cout << "This ";
	cout << "is an Introduction to ";
	cout << "C++ Programming";
	
	cout << "\n\n\n";
	cout << "This is an" << endl;
	cout << "Introduction to C++ Programming";
	
	//The recommended approach is to use \n unless we have to flush the output
	//stream immediately.
	//In short, endl appends \n to the stream and calls flush() on the stream.
	
	//cout << x << endl;
	//
	//is equivalent to
	//
	//cout << x << "\n";
	//cout.flush();
	return 0;
}
