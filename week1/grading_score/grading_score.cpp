#include <iostream>
using namespace std;

int main() {
	cout << "using if condition\n";
	int score;
	while (1){
		cout << "enter your score (0=stop): ";
		cin >> score;
		if (score == 0)
			break;
		cout << "your grade: ";
		if (score > 100 || score < 0)
			cout << "wrong score\n";
		else if (score >= 90)
			cout << "A\n";
		else if (score >= 80)
			cout << "B\n";
		else if (score >= 70)
			cout << "C\n";
		else if (score >= 60)
			cout << "D\n";
		else
			cout << "F\n";
	}

	cout << "using switch\n";
	int div;
	cin >> score;
	div = score / 10;
	switch (div) {
	case 10:
		cout << "A"; break;
	case 9:
		cout << "B"; break;
	case 8:
		cout << "C"; break;
	case 7:
		cout << "D"; break;
	case 6:
		cout << "F"; break;
	}
	return 0;
}

//조건문 사용법