/*/
#include <stdio.h>

int main() {
    
    int num = 0;
    while(1){
        printf("양의 정수를 입력하시오 : ");
        scanf("%d", &num);
        
        if(num < 1) {
            printf("%d를 입력하였습니다. 다시 입력하세요. \n", num);
        }
        
        else {
            break;
        }
    }
    
    do{
        
        printf("%d", num % 10);
        num = num / 10;
        
    }while(num);
    
    printf("\n");
    
    return 0;
}
//*/
