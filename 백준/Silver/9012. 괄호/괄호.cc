#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);

    std::stack<char>st;

    int T; std::cin >> T;

    for (bool isYes = true; T--; isYes = true) {
        std::string input; std::cin >> input;
        for(const char &ch : input) {
            if (ch == '(') { st.push(ch); }
            else if (!st.empty()) { st.pop(); }
            else { isYes = false; break; }
        }

        if (!st.empty()) {
            isYes = false;
            for(; !st.empty(); st.pop());
        }

        std::cout << (isYes ? "YES" : "NO") << '\n';

    }

    return 0;
}
