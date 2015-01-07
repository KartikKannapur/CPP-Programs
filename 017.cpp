//Program 017.cpp - Character comparisions

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	//Keep comapring until it returns the value - hello
	char word[10] = "?ello";
	for (char ch = 'a';  strcmp(word, âhelloâ), ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	
	cout << âThe word is: â << word << endl;
	return 0; 
}
