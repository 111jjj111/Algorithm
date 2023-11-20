#include <iostream>
#include <stack>

using namespace std;
int main()
{   stack<int>st;
    long long answer = 0;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
       long long s; cin >> s;
       while(!st.empty() && st.top() <= s){st.pop();}
       answer += st.size();
       st.push(s);
    }
    cout << answer;
    
    return 0;
    
}

