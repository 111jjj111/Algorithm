#include <iostream>
using namespace std;

int main() {
	int maxValue, result;
	int* arr = new int[100];

	for (int i = 1; i < 10; i++) {
		cin >> arr[i];
	}
	maxValue = arr[0];
	for (int i = 1; i < 10; i++) {
		if (maxValue < arr[i]) {
			maxValue = arr[i];
			result = i;
		}
	}
	cout << maxValue << endl << result;
	

	delete[]arr;
	return 0;
}