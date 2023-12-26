#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; int m; cin >> n; cin >> m;
    vector<int> v; int input;
    for(int i = 0; i < n; i++){
        cin >> input;
        v.push_back(input);
    }
    
    int result = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                sum = v[i] + v[j] + v[k];
                if(sum == m){
                    cout << sum;
                    return 0;
                }
                else if(sum < m && result < sum){
                    result = sum;
                }
            }
        }
    }
    cout << result;
    return 0;
}
