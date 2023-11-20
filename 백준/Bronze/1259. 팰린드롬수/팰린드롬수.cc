#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string palin,rever;
    while(1){
        std::cin >> palin;
        if(palin == "0"){
            break;
        }
        rever = palin;
        reverse(rever.begin(),rever.end());
        if(palin == rever){
            std::cout << "yes" << std::endl;
        }
        else{
            std::cout << "no" << std::endl;
        }
        
    }
    return 0;
}
