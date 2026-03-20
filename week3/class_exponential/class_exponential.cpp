#include <iostream>
using namespace std;

class Exp {
private:
	int base;
	int exp;

public:
	Exp() {
		base = 1;
		exp = 1;
	}
	Exp(int b) {
		base = b;
		exp = 1;
	}
	Exp(int b, int e) {
		base = b;
		exp = e;
	}
	int getBase() {
		return base;
	}
	int getExp() {
		return exp;
	}
	int getValue() {
		int result = 1;
		for (int i = 0; i < exp; i++) {
			result *= base;
		}
		return result;
	}
	bool equals(Exp b) {
		return getValue() == b.getValue();
	}
};

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "base of a " << a.getBase() << ", exponential " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}