#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    deque<int> de;
    for(int i = 1; i < n + 1; i++) {
        de.push_back(i);
    }
    while(de.size() != 1) {
        de.pop_front();
        int tmp = de.front();
        de.pop_front();
        de.push_back(tmp);
    }
    cout << de[0];
    return 0;
}
