/*/
#include <stdio.h>

int  input_first_num(void);
int input_second_num(void);
int plus(int a, int b);
int minus(int a, int b);
int multy(int a, int b);
double divide(int a, int b);

int main() {
    
    int num1 = 0, num2 = 0;
    int result1 = 0;
    double result2 = 0;
    
    printf("== strat program == \n");
    
    num1 = input_first_num();
    num2 = input_second_num();
    
    result1 = plus(num1,num2);
    printf("%d + %d = %d \n", num1, num2, result1);
    
    result1 = minus(num1, num2);
    printf("%d - %d = %d \n",num1, num2, result1);
    
    result1 = multy(num1, num2);
    printf("%d * %d = %d \n", num1, num2, result1);
    
    result2 = divide(num1, num2);
    printf("%d / %d = %lf \n", num1, num2, result2);
    

    
    return 0;
}

int input_first_num(){
    
    int num = 0;
    
    while(1){
        printf("input first number : ");
        scanf("%d", &num);
        if(num < 1 || num > 100){
            printf("wrong number... try again \n");
            continue;
        }else{
            break;
        }
    }
    return num;
}

int input_second_num(){
    
    int num = 0;
    
    while(1){
        printf("input second number : ");
        scanf("%d", &num);
        if(num < 1 || num > 100){
            printf("wrong number... try again \n");
            continue;
        }else{
            break;
        }
    }
    return num;
}

int plus(int a, int b) {
    int result = 0;
    result = a + b;
    
    return result;
}

int minus(int a, int b) {
    int result = 0;
    result = a - b;
    
    return result;
}

int multy(int a, int b) {
    int result = 0;
    result = a * b;
    
    return result;
}

double divide(int a, int b){
    double result = 0.0;
    
    result = (double)a / (double)b;
    
    return result;
}
//*/
