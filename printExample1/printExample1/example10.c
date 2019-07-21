/*/
#include <stdio.h>

int main() {
    
    double num = 0.0;
    int multyNum = 0;
    int i = 0;
    double result = 0.0;
    
    result = 1.0;
    
    while(1){
        
        while(1){
            
            printf("실수값을 입력하세요 (1 ~ 10) : ");
            scanf("%lf", &num);
            
            if(num < 1.0 || num > 10.0){
                printf("%lf 를 입력하였습니다. 다시 입력하세요. \n", num);
            }
            
            else
                break;
            
        }
        
        while(1){
            
            printf("거듭제곱 횟수를 입력하세요 (1 ~ 10) : ");
            scanf("%d", &multyNum);
            
            if(multyNum < 1 || multyNum > 10){
                printf("%d 를 입력하였습니다. 다시 입력하세요. \n", multyNum);
            }
            
            else
                break;
        }
        
        for(i = 1; i <= multyNum; i++){
            result = result * (double)num;
            
        }
        
        break;
        
    }
    
    printf("결과 값은 : %lf \n", result);
    
    return 0;
    
}
//*/
