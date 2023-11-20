#include <iostream>
using namespace std;

int main() {
	int n,minValue,maxValue;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	minValue = arr[0];
	maxValue = arr[0];
	for (int i = 0; i < n; i++) {
		if (minValue > arr[i]) {
			minValue = arr[i];
		}
		if (maxValue < arr[i]) {
			maxValue = arr[i];
		}
	}
	
	cout << minValue << " " << maxValue;
	return 0;
}