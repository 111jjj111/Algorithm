#include <iostream>


using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int quarter = 0,dime = 0,nickel = 0,penny = 0;
        int C; cin >> C;
        quarter = C / 25;
        C %= 25;
        dime = C / 10;
        C %= 10;
        nickel = C / 5;
        C %= 5;
        penny = C / 1;
        C %= 1;
        cout << quarter << " " << dime << " "
        << nickel << " " << penny << endl;  
    }
    return 0;
}
