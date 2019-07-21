/*/
#include <stdio.h>

int main() {
    
    int num = 0;
    int sum = 0;
    int i = 0;
    
    while(1){
        
        printf("n의 값을 입력하세요 (1 ~ 50) : ");
        scanf("%d", &num);
        
        if(num < 1 || num > 50){
            printf("%d 를 입력하였습니다. 다시 입력하세요. \n", num);
        }
        
        else {
            
            for(i = 1; i <= num; i++){
                sum = sum + (i * i);
            }
            
        }
        
        break;
        
    }
 
    printf("계산 값은 %d 입니다. \n", sum);
    
    return 0;
    
}
//*/
