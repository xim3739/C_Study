/*#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    
    while(1){
    
        while(1){
        
            printf("input first number (1 ~ 100) : ");
            scanf("%d", &num1);
        
            if(num1 < 1 || num1 > 100){
                printf("%d를 입력하였습니다. 다시 입력하세요 (1 ~ 100) \n", num1);
            }else
                break;
        }
        while(1){
            printf("input second number (1 ~ 100) : ");
            scanf("%d", &num2);
        
            if(num2 < 1 || num2 > 100){
                printf("%d 를 입력하였습니다. 다시 입력하세요 (1 ~ 100) \n ", num2);
            }else
                break;
        }
        if(num1 == -1 || num2 == -1){
            exit(1);
        }
        sum = num1 + num2;
        printf("%d + %d = %d 입니다. \n ", num1, num2,sum);
        
    }
    return 0;
    
}*/


