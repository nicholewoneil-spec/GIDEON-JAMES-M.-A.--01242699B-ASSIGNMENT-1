#include <iostream>
#include <cctype>  // fro isupper()
using namespace std;

int main() {
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	
	if (isupper(ch))  // isupper already returns true for A-Z
	cout << "Uppercase letter" << endl;
	else
	cout << "Not an uppercase letter" << endl;
	
	return 0;
}
