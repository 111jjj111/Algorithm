#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int j = 1; j < n + 1; j++) {
		for (int i = 0; j > i; i++) {
			cout << '*';
		}
		cout << endl;

	}
	return 0;
}