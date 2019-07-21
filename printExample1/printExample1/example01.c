/*/
#include <stdio.h>

int main() {
    
    int num = 3;
    int sum = 0;
    int multy = 0;
    int i = 0;
    
    for(i = 1; multy <= 100; i++){
 
        multy = num * i;
 
        if(multy <= 100){
 
            sum = sum + multy;
            
        }
      
    }
    
    printf("1부터 100 사이의 모든 3의 배수의 합은 %d 입니다. \n", sum);
    
    return 0;
    
}
//*/
