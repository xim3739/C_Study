/*/
#include <stdio.h>

int main() {
    
    int num = 0;
    int sum = 0;
    
    num = 1;
    
    printf("%d 부터 ", num);
    
    for(num = 1; 1 ; num++) {
        sum = sum + num;
        if(sum >= 10000){
            break;
        }
    }
    
    sum = sum - num;
    num = num - 1;
    
    printf("%d 까지의 합은 %d 입니다. \n",num, sum);
    
    return 0;
    
}
//*/
