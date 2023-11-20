#include <iostream>
using namespace std;

int main() {
	int n;
	double avg = 0;
	unsigned int m = 0;
	cin >> n;
	double* arr = new double[n];

	for (int i = 0; i < n; i++) { // n크기만큼의 배열입력
		cin >> arr[i];	
	}

	for (int i = 0; i < n; i++) { // 최대값 m 탐색
		if (arr[i] > m) {
			m = arr[i];
		}
	}
	double tmp = 0;
	for (int i = 0; i < n; i++) {
		avg += (arr[i] / m) * 100;
	}

	avg = avg / n;

	cout << avg;

	delete[]arr;
	return 0;
}