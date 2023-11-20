#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare(int a, int b) {
	return a > b;
}

int main() {
	string A, B;
	cin >> A; cin >> B;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	if (A > B) {
		cout << A;
	}
	else {
		cout << B;
	}
	return 0;
}