#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    queue<int> q;
    string s;
    int sNum;
    int n; cin >> n;
    while(n--){
        cin >> s;
        if (s == "push") {
            cin >> sNum;
            q.push(sNum);
        }
        else if(s == "pop"){
            if(q.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (s == "front") {
            if (q.empty()) {
                cout << -1 << "\n"; }
            else{
                cout << q.front() << "\n";
            }
        }
        else if(s == "back"){
            if(q.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << q.back()<< "\n";
            }
        }
        else if (s == "size") {
            cout << q.size() << "\n";
        }
        else if (s == "empty"){
            cout << q.empty() << "\n";
        }
    }
    return 0;
}
