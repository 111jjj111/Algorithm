#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    getline(cin,input);
    int count = 1;
    if(input[0] == ' '){
        count = 0;
    }
    
    for(int i = 0; i < input.length() - 1; i++){
        if(input[i] == ' '){
            count++;
        }
        
    }
    cout << count;
    return 0;
    
    
}
