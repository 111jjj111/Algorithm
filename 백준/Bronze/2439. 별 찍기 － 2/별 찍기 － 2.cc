#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int j = 1; j < n + 1; j++) {
		for (int i = n; i > j; i--) {
			cout << ' ';
		}

		for (int k = 0; k < j; k++) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}