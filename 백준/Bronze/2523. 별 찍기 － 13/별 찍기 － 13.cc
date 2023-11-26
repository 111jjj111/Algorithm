#include <iostream>
using namespace std;
//
//  *
// **
//***
// **
//  *
int main() {
	int n; cin >> n;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}

		cout << "\n";
	}
	for (int i = 1; i < n; i++) {
		for (int j = n; j > i; j--) {
			cout << "*";
		}

		if (i < n - 1) {
			cout << "\n";
		}
	}
	return 0;
}