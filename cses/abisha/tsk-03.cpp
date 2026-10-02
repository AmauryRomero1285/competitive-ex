#include <iostream>

int main(){
    std :: string input;
    
    std::cin >> input;
    
    int i = 1;
    
    int count = 1;
    int maxCount = 1;
    
    while(i < input.length()) {
        if(input[i-1] != input[i]){
            count = 1;
        } else {
            count ++;
        }
        if(count > maxCount){
                maxCount = count;    
        }
        i++;
    }
    
    std::cout<<maxCount;

    return 0;
}