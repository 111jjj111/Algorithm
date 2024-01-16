#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector<int> v;
    int input,sum = 0;
    for(int i = 0; i < 5; i++) {
        cin >> input;
        v.push_back(input);
    }
    for(int i = 0; i < 5; i++) {
        sum += v[i] * v[i];
    }
    
    int result = sum % 10;
    cout << result;
    return 0;
}
