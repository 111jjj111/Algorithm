#include <iostream>
#include <stack>

using namespace std;
int main()
{   int count = 1;
    stack<int>st;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int height; cin >> height;
        st.push(height);
    }

    int rStick = st.top();

    st.pop();
    while(!st.empty()){
        if(st.top() > rStick)
        {
            count++;
            rStick = st.top();
        }
        st.pop();
        
    }
        
    cout << count;
    
    return 0;
    
}

