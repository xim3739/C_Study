/*/
#include <stdio.h>

int main() {
    
    int num =0;
    int flage = 0;
    int value1 = 0;
    int value2 = 1;
    int sum = 1;
    int i = 0;
    
    while(1){
        
        printf("표한하고 싶은 피보나치 수열의 항을 입력하세요 (1 ~ 200) : ");
        scanf("%d", &num);
        
        if(num < 1 || num > 200){
            printf("%d 를 입력하였습니다. 다시 입력하세요. \n", num);
            continue;
        }
        
        else {
            
            for(i = 1; i <= num; i++){
                
                if(flage == 0){
                    printf("%d ", value1);
                    flage = 1;
                }
                
                printf("%d ", sum);
                
                sum = value1 + value2;
                value1 = value2;
                value2 = sum;
                
            }

        }
        
        break;
    }
    
    printf("\n");
    
    return 0;
    
}
//*/

