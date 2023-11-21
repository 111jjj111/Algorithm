#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(const pair<int,string>&a,const pair<int,string>&b){
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<pair<int, string>> s(n);
    
    for(int i = 0; i < n; i++){
        cin >> s[i].first >> s[i].second;
    }
    
    stable_sort(s.begin(),s.end(),compare);
    
    for(int i = 0; i < n; i++){
        cout << s[i].first << " " << s[i].second << '\n';
    }
    return 0;
}
