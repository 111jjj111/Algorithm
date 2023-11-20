#include <iostream>
using namespace std;

int main() {
	int n, m, i, j, k;
	cin >> n >> m;
	int arr[100] = { 0 };
	for (int start = 0; start < m; start++) {
		cin >> i >> j >> k;
		for (int start = i; start <= j; start++) {
			arr[start] = k;
		}
			
	}
	for (int start = 1; start <= n; start++) {
		cout << arr[start] << " ";
	}
	return 0;
}