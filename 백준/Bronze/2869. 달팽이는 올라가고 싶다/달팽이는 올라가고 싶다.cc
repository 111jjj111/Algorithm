#include <iostream>
using namespace std;
    
int main() {
    int a,b,v; cin >> a >> b >> v;
    int totalday = 1;
    totalday += (v-a) / (a-b);
    if((v-a) % (a-b) != 0)
        totalday++;
    if(a >= v)
        cout << 1;
    else
        cout << totalday;
    return 0;
}
