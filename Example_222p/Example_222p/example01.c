/*/
#include <stdio.h>

int main() {
    
    int num1 = 0, num2 = 0;
    
    while(1){
        
        printf("두 개의 정수를 입력하세요 : ");
        rewind(stdin);
        scanf("%d %d", &num1, &num2);
        
        if(num1 > num2) {
            printf("큰 수는 %d 입니다. \n", num1);
        } else if(num1 < num2) {
            printf("큰 수는 %d 입니다. \n", num2);
        }else{
            printf("두 수가 같습니다. 종료합니다아아아아아앙 \n");
            break;
        }
    }
    
    return 0;
}
//*/
