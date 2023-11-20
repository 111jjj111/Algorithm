#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase, a, b;
	cin >> testCase;

	while (testCase != 0) {
		cin >> a >> b;
		cout << a + b << '\n';
		testCase--;
	}

	return 0;
}