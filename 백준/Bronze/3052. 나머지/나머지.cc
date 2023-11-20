#include <iostream>
using namespace std;

int main() {
	int count = 0;
	
	unsigned int arr[10],na[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		na[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		bool isUnique = true;
		for (int j = 0; j < i; j++) {
			if (na[i] == na[j]) {
				isUnique = false;
				break;
			}
		}
		if (isUnique) {
			count += 1;
		}
	}

	cout << count;
	
	return 0;
}