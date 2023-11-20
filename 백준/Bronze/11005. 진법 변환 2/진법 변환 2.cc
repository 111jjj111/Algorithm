#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n,b; cin >> n; cin >> b;
    string result;
    
    while(n != 0){
        int tmp = n % b;
        if(tmp >= 10 && tmp <= 35){
            tmp = tmp - 10 + 'A';
            result += tmp;
            
        }
        else if(tmp <= 9){
            result += ('0' + tmp);
        }
        n /= b;
    }
    reverse(result.begin(),result.end());
    cout << result;
    return 0;
}
