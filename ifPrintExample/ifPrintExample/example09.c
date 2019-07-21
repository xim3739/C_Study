/*/
#include <stdio.h>

int main() {
    
    double xNum = 0.0;
    double result = 0.0;
    
    while(1){
        printf("x 값을 입력하세요 : ");
        scanf("%lf", &xNum);
        if(xNum < 0 || xNum > 100){
            printf("다시 입력하세요 \n");
            continue;
        }else{
            break;
        }
        
    }
    
    if(xNum <= 0){
        result = xNum*xNum*xNum - (9 * xNum) + 2;
    }else{
        result = 7 * xNum + 2;
    }
    
    printf("f(x) 의 값은 %lf 입니다. \n", result);
    
    return 0;
}

//*/
