#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    vector<int> v(9);

    for(int i = 0; i < 9; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 9; j++) {
            int sum = accumulate(v.begin(), v.end(), 0) - (v[i] + v[j]);
            if(sum == 100) {
                v.erase(v.begin() + j);
                v.erase(v.begin() + i);
                
                sort(v.begin(), v.end());
                
                for(int k = 0; k < 7; k++) {
                    cout << v[k] << endl;
                }
                return 0;
            }
        }
    }

    return 0;
}
