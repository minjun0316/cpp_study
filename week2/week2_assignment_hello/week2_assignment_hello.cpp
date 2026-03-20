#include <iostream>
#include <string>
using namespace std;

int main() {
	string answer;
	cout << "write the string\n";
	cin >> answer;
	int n = answer.length();
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			cout << answer[j];
		}
		cout << "\n";
	}

}