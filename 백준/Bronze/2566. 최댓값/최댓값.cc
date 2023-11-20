#include <iostream>

using namespace std;

int main(){
    int arr[9][9],maxV = 0,maxI,maxJ;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(arr[i][j] >= maxV){
                maxV = arr[i][j];
                maxI = i + 1;
                maxJ = j + 1;
            }
        }
    }
    
    cout << maxV << '\n' << maxI << " " << maxJ;
    return 0;
}
