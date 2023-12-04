#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    queue<int>q;
    
    for(int i = 1;i < N + 1; i++){
        q.push(i);
    }
    cout << "<";
    while(!q.empty()){
        for(int i = 1; i < K; i++){
            int front = q.front();
            q.pop();
            q.push(front);
        }
        cout << q.front();
        q.pop();
        if(!q.empty()){
            cout << ", ";
        }
    }
    cout << ">";
}
