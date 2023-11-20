#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int size = 1;
    for(int i = 0; i < n; i++){
        size *= 2;
    }

    int result = (size + 1) * (size + 1);

    cout << result << endl;
    return 0;
}