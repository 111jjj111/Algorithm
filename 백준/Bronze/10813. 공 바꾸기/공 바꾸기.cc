#include <iostream>
using namespace std;

int main() {
	int n, m, i, j;
	cin >> n >> m;
	int* arr = new int[n + 1];
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	while (m--) {
		int tmp;
		cin >> i >> j;
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	for(int i = 1; i <= n; i++){
		cout << arr[i] << " ";
	}

	return 0;
	delete[]arr;
}