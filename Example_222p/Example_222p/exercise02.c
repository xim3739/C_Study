/*/
#include <stdio.h>

int main() {
    
    int num1 = 0, num2 = 0;
    
    while(1){
        printf("정수를 입력하세요 : ");
        rewind(stdin);
        scanf("%d", &num1);
        printf("정수를 입력하세요 : ");
        rewind(stdin);
        scanf("%d", &num2);
        
        if(num1 < num2){
            printf("다시 입력하세요. \n");
            continue;
        }else{
            if((num1 % num2) == 0){
                printf("약수입니다. \n");
            }else{
                printf("약수가 아닙니다. \n");
            }
        }
        break;
    }
    return 0;
}
//*/
