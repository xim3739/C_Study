/*/
#include <stdio.h>

double input_first_num(void);
double input_second_num(void);
double divide(double a, double b);
void output(double x);
void infomation(void);


int main() {
    
    double num1 = 0.0, num2 = 0.0;
    double result = 0.0;
    
    infomation();
    
    num1 = input_first_num();
    num2 = input_second_num();
    while(1){
        if(num2 == 0){
            printf("wrong input number... try again \n");
            num2 = input_second_num();
        }else
            break;
    }
    
    result = num1 / num2;
    
    output(result);
    
    return 0;
}

void infomation(void){
    printf("staring program ===\n");
    return;
}

void output(double x){

    printf("result of divide is %lf \n", x);
    
}

double input_first_num(){
    
    double num = 0;
    
    while(1){
        printf("input first number : ");
        scanf("%lf", &num);
        if(num < 1 || num > 100){
            printf("wrong number... try again \n");
            continue;
        }else{
            break;
        }
    }
    return num;
}
double input_second_num(){
    
    double num = 0;
    
    while(1){
        printf("input second number : ");
        scanf("%lf", &num);
        if(num < 1 || num > 100){
            printf("wrong number... try again \n");
            continue;
        }else{
            break;
        }
    }
    return num;
}

double divide(double a, double b){
    double result = 0.0;
    
    result = a / b;
    
    return result;
}
//*/
