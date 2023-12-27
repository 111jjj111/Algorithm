#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //변수입력받고 분해합 구하기
    int n; cin >> n;
    string str;
    for(int i = 0; i < n; i++) {
        int result = 0;
        str = to_string(i);
        for(int j = 0; j < str.length(); j++){
            result += str[j] - '0';
        }
        if(result + i == n){
            cout << i;
            return 0;
        }
    }
    cout << 0;

    return 0;
}
