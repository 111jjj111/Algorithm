#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
char WB[8][8] = {
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W'
};
char BW[8][8] = {
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B'
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int m,n; cin >> m >> n;
    int value = 64,result = 0;

    vector<vector<char> > v(50,vector<char>(50));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    
    for(int i = 0; i <= m - 8; i++) {
        for(int j = 0; j <= n - 8; j++) {
            int countBW = 0,countWB = 0;
            for(int k = 0; k < 8; k++){
                for(int s = 0; s < 8; s++){
                    if(v[i + k][j + s] != WB[k][s]){
                        countWB++;
                    }
                    if(v[i + k][j + s] != BW[k][s]){
                        countBW++;
                    }
                    
                }
            }
            result = min(countWB,countBW);
            if(result <= value){
                value = result;
            }
        }
    }
    cout << value;
    return 0;
}
