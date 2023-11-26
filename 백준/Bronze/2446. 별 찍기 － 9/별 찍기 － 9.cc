#include <iostream>
using namespace std;

//*********
// *******
//  *****
//   ***
//    *
//   ***
//  *****
// *******
//*********

int main() {
	int n; cin >> n;
	int k = 2;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 0; j < i - 1; j++) {
			cout << " ";
		}
		for (int j = 2 * (n - 1); j >= 2 * (i - 1); j--) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 2; i < n + 1; i++) {
		for (int j = n + 1; j >= i + 2; j--) {
			cout << " ";
		}
		for (int j = 0; j <= 2 * (i - 1); j++) {
			cout << "*";
		}
		if (i < n) {
			cout << "\n";
		}
	}
	return 0;
}