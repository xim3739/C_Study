/*/
#include <stdio.h>

int input_num(void);
int subtract(int a, int b);
int sum(int a, int b);
void sum_value(int a, int b, int c);
void sub_value(int a, int b, int c);

int main() {
    
    int num1 = 0, num2 = 0;
    int sumResult = 0;
    int subResult = 0;
    
    
    
    sumResult = sum(num1, num2);
    subResult = subtract(num1, num2);
    
    sum_value(num1, num2, sumResult);
    sub_value(num1, num2, subResult);
    
    return 0;
}

int input_num(void){
    
    int num = 0;
    
    while(1){
        printf("input number : ");
        scanf("%d", &num);
        if(num < 0 || num > 100){
            printf("wrong input number... try again. \n");
        }else{
            break;
        }
    }
    
    return num;
}

int subtract(int a, int b){
    
    return a - b;
}

int sum(int a, int b){
    
    return a + b;
}

void sum_value(int a, int b, int c){
    
    printf("%d + %d = %d \n", a,b,c);
    return;
}

void sub_value(int a, int b, int c){
    
    printf("%d - %d = %d \n", a, b, c);
    return;
}
//*/
