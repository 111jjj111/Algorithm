#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int count = 0;	   
    while(1) {
        if (n % 5 == 0) {
            count += n / 5;
            break;
        }
        else if(n % 3 == 0 || n > 3) {
            n -= 3;
            count++;
        }
        else {
            cout << -1;
            return 0;
        }

        
    }
    
    cout << count;
    return 0;
    	
}
