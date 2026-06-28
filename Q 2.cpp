#include <iostream>
#include <cmath> //for pow()
using namespace std;

int main() {
	double r;
	cout << "Enter radius: ";
	cin >> r;
	double area = 3.14159 * pow(r, 2); // or r * r
	cout << "Area = " << endl;
	return 0;
}
