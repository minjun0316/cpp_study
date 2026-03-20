#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "enter two integers\n";
	cin >> a >> b;
	
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	cout << "sum of " << a << " to " << b << " is " << sum;
}