//Program 11.cpp - Structures

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct myNewStruct
{
	string name;
	char initials;
	int age;
};

int main() {
	myNewStruct kartikKannapur = {"Kartik Kannapur",'R',22};
	
	myNewStruct helloWorld = {"Hello", 'C', 100};
	
	cout << "Your name is: " << kartikKannapur.name << endl;
	cout << "Your initial is: " << kartikKannapur.initials << endl;
	cout << "Your age is: " << kartikKannapur.age << endl;
	
	cout << "The other structure's name is : " <<helloWorld.name << endl;
	cout << "The first character is: " <<helloWorld.name[1] << endl;
	
	return 0;
}
