/*#include <stdio.h>

int main() {
    
    int num = 0;
    int multy = 0;
    int multytNum = 0;
    int multyCount = 0;
    
    while(1){
        
        printf("1 ~ 10 까지의 정수를 입력하세요 : ");
        scanf("%d", &num);
        
        if(num < 1 || num > 10){
            printf("%d를 입력하였습니다. 다시 입력하세요. \n", num);
        }
        else{
            
            printf("%d 의 배수 :", num);
            
            for(multytNum = 1; multy <= 100; ++multytNum) {
                    
                    multy = num * multytNum;
 
                if(multy <= 100){
                    
                    printf(" %d", multy);
                    
                }
                
            }
         
            break;
            
        }
        
    }
    
    multyCount = multy / num;
    printf("\n%d 의 배수의 개수 : %d \n", num, multyCount-1);
    
    return 0;
}
*/
