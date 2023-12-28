#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str,strReverse; cin >> str;
    strReverse = str;
    reverse(begin(strReverse),end(strReverse));
    if(str == strReverse) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}
