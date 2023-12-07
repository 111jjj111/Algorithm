#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int kth(vector<int> &a, int k){
    nth_element(a.begin(), a.end() - k, a.end(),greater<int>());
    return a[a.size() - k];
}
