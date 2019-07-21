/*#include <stdio.h>

int main() {

    int num = 0;
    int i = 0;
    int multy = 0;
    
    while(1){
        
        printf("표현할 구구단을 입력하세요 : ");
        scanf("%d", &num);
        
        if(num < 2 || num > 9){
            
            printf("%d를 입력하였습니다. 다시 입력하세요. \n", num);
            
        } else {
            
            for( ; num > 1; num--) {
                
                printf("\n");
                
                for(i = 9; i >= 1; i--) {
                
                    multy = num * i;
                    printf("%d * %d = %d \n", num, i, multy);
                
                }
            }
         
            break;
            
        }
        
    }
    
    printf("\n ==== END ==== \n \n");
    
    return 0;
    
}*/
