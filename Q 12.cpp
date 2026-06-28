#include <iostream>
using namespace std;

int main() {
	float a, b;
	cout << "Enter two floats: ";
	cin >> a >> b;
	float larger = (a > b) ? a : b;
	cout << "Larger is " << larger << endl;
	return 0;
}
