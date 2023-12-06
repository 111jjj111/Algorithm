#include <iostream>
#include <vector>
#include <stack>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int k; cin >> k;
    stack<int>st;
    int sum = 0;
    int input;
    for(int i = 0; i < k; i++) {
        cin >> input;
        if(input != 0){
            st.push(input);
            sum += st.top();
        }
        else{
            sum -= st.top();
            st.pop();
        }
        
    }
    cout << sum;
    
    return 0;
}
