#include <iostream>
using namespa
ce std;

int main() {
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	
	cout << "Sum = " << a + b << endl;
	cout << "Difference = " << a - b << endl;
	cout << "Product = " << a * b << endl;
	if (b != 0)
	    cout << "Quotient = " << a / b << endl;
	else
	    cout << "Cannot divide by zero." << endl;
	    
	return 0;    
	}
