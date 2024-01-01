#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int count = 0,end = 665;
    while(1) {
        end++;
        string str = to_string(end);
        if(str.find("666") != string::npos) {
            count++;
        }
        if(count == n){
            cout << end;
            return 0;
        }
    }
    
}
