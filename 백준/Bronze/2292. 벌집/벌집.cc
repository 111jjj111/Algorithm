#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int result = 1,add = 6;
    
    for(; n > 1;){
        n -= add;
        add += 6;
        result++;
    }
    cout << result;
    return 0;
}