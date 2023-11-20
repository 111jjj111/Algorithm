#include <iostream>
#include <string>

using namespace std;

int main(){
    string input; cin >> input;
    int count = 0,size = input.length();
    for(int i = 0; i < size; i++){
        count += 2;
        if(input[i] == 'A' || input[i] == 'B' || input[i] == 'C'){
            count += 1;
        }
        else if(input[i] == 'D' || input[i] == 'E' || input[i] == 'F'){
            count += 2;
        }
        else if(input[i] == 'G' || input[i] == 'H' || input[i] == 'I'){
            count += 3;
        }
        else if(input[i] == 'J' || input[i] == 'K' || input[i] == 'L'){
            count += 4;
        }
        else if(input[i] == 'M' || input[i] == 'N' || input[i] == 'O'){
            count += 5;
        }
        else if(input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S'){
            count += 6;
        }
        else if(input[i] == 'T' || input[i] == 'U' || input[i] == 'V'){
            count += 7;
        }  
        else if(input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z'){
            count += 8;
        }
        else {
            count += 9;
        }     
    }    
    cout << count;
    return 0;
}
