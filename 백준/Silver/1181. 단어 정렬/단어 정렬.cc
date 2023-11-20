#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main() {
	int n;
	cin >> n;
	vector<string>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());

	sort(v.begin(), v.end(), compare);
	

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	return 0;
}