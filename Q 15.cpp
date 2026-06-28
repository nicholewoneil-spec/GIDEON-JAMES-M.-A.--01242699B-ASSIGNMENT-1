#include <iostream>
#include <string>
using namespace std;

int main() {
	string bin;
	cout << "Enter a binary numbers: ";
	cin >> bin;
	int decimal = 0, base = 1;
	for (int i = bin.length() - 1; i >= 0; i--) {
		if (bin[i] == '1')
	    decimal += base;
	    base *= 2;
	}
	cout << "Decimal: " << decimal << endl;
	cout << "Hexadecimal: " << hex << decimal << endl;
	cout << "Octal: " << oct << decimal << endl;
	return 0;
}
