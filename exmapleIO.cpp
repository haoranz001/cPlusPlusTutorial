#include <iostream>
#include <string> // another library used for character strings

int main(){
	cout << "Enter your first name: ";
	string name; // You can disregard how it works for now 
	cin >> name; // name is a variable holding your name
	cout << "Hello " << name << endl;
	return 0; // This is a sanity check.
	// By default, you want C++ to return 0 if the program runs without error.
}
