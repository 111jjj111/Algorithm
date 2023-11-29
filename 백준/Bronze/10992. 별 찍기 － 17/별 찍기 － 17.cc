#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i < n + 1; i++){
        if(n == 1){
            cout << "*";
            break;
        }
        if(i > 0){
            for(int j = n; j > i; j--){
                cout << " ";
            }
            if(i > 0){
                cout << "*";
            }
            if(i == n){
                for(int j = 1; j < n + n - 1; j++){
                    cout << "*";
                }
            }
            else{
                for(int j = 1; j < 2 * (i - 1); j++){
                    cout << " ";
                }
                if(i > 1){
                    cout << "*";
                }
            }
            cout << "\n";
        }
        
    }
    return 0;
}
