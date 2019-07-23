/*/
#include <stdio.h>
#include <stdlib.h>

int num1 = 0;
int num2 = 0;

void input_num(void){
    
    printf("숫자 두 개를 입력하세요 (0 0 -> exit) :");
    scanf("%d %d", &num1, &num2);
    if(num1 == 0 && num2 == 0){
        printf("종료합니다. \n");
        exit(1);
    }
    return;
    
}

void sum_result(void){
    
    int sum = 0;
    
    sum = num1 + num2;
    
    printf("덧셈 결과 : %d \n", sum);
    
    return;
}

int main() {
    
    while(1){
        input_num();
        sum_result();
    }
    
    
    
    return 0;
}
//*/
