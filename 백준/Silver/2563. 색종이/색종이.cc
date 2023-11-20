#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testcase; cin >> testcase;
    int count = 0;
    vector<vector<int> >v(100,vector<int>(100,0));
    while(testcase--){
        int x,y;
        cin >> x >> y;
        for(int i = x; i < x + 10; i++){
            for(int j = y; j < y + 10; j++){
                if(v[i][j] != 1){
                count+= 1;
                }
                v[i][j] = 1;
            }
        }
    }
    
    cout << count;
    return 0;
}
