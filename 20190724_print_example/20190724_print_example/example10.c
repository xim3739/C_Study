/*/
#include <stdio.h>

int input_number(void);
void is_multiple(int num1, int num2);

int main() {
    
    int num1 = 0, num2 = 0;
    
    num1 = input_number();
    num2 = input_number();
    is_multiple(num1, num2);
    
    return 0;
}

int input_number(void){
    
    int num = 0;
    
    while(1){
        printf("input number (1 ~ 100) : ");
        scanf("%d", &num);
        if(num < 0 || num > 100) {
            printf("wrong input number ... try again !! \n");
        }else {
            break;
        }
    }
    return num;
}

void is_multiple(int num1, int num2){
    
    int result = 0;
    
    result = num1 % num2;
    
    if(result == 0){
        printf("%d 는 %d 의 배수입니다. \n",num1, num2);
    }else{
        printf("%d 는 %d 의 배수가 아닙니다. \n", num1, num2);
    }
    
    return;
}
//*/
