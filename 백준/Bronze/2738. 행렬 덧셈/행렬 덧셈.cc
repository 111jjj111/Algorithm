#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector<vector<int> >a(n,vector<int>(m));
    vector<vector<int> >b(n,vector<int>(m));
    vector<vector<int> >result(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int input; cin >> input;
            a[i][j] = input;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int input; cin >> input;
            b[i][j] = input;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            result[i][j] = a[i][j] + b[i][j];
            cout << result[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}
