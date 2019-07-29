/*/
#include <stdio.h>
#include <stdlib.h>

int input_num(void);
char cal_menu(void);
void operhand_plus(int num1, int num2);
void operhand_sub(int num1, int num2);
void operhand_multy(int num1, int num2);
void operhand_devide(int num1, int num2);

int main() {
    
    int num1 = 0, num2 = 0;
    char calName = 0;
    
    while(1){
    
        num1 = input_num();
        calName = cal_menu();
        if(calName == 'E' || calName == 'e'){
            printf("Exit Programs Thank You \n");
            exit(1);
        }
        num2 = input_num();
        
        switch (calName) {
            case '+':
                operhand_plus(num1, num2);
                break;
            case '-':
                operhand_sub(num1, num2);
                break;
            case '*':
                operhand_multy(num1, num2);
                break;
            case '/':
                operhand_devide(num1, num2);
                break;
        }
        
    }
    
    return 0;
}

int input_num(void){
    
    int num = 0;
    
    printf("input number plz : ");
    scanf("%d", &num);
    
    return num;
}

char cal_menu(void){
    
    char calName = 0;
    
    printf("input operator (exit is 'e'key) : ");
    rewind(stdin);
    scanf("%c", &calName);
    
    return calName;
}

void operhand_plus(int num1, int num2){
    
    static int plusCount = 1;
    
    printf("plus count is %d \n", plusCount);
    printf("cal result is %d \n", num1 + num2);
    
    plusCount++;
    
    return;
}

void operhand_sub(int num1, int num2){
    
    static int minusCount = 1;
    
    printf("minus count is %d \n", minusCount);
    printf("cal result is %d \n", num1 - num2);
    
    minusCount++;
    
    return;
}

void operhand_multy(int num1, int num2){
    
    static int multy_count = 1;
    
    printf("multy count is %d \n", multy_count);
    printf("cal result is %d /n", num1 * num2);
    
    multy_count++;
    
    return;
}

void operhand_devide(int num1, int num2){
    
    static int devideCount = 1;
    
    printf("devide count is %d \n", devideCount);
    printf("cal result is %d \n", num1 / num2);
    
    devideCount++;
    
    return;
}
//*/
