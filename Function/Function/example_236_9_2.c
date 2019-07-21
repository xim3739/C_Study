/*/
#include <stdio.h>

int input_num(void);
int max(int num1, int num2);
int min(int a, int b);

int main() {
    
    int num1 = 0, num2 = 0;
    int maxNum = 0, minNum = 0;
    
    num1 = input_num();
    num2 = input_num();
    
    maxNum = max(num1, num2);
    minNum = min(num1, num2);
    
    printf("big number : %d \n", maxNum);
    printf("small number : %d \n", minNum);
    
    return 0;
}

int input_num(){
    
    int num = 0;
    
    while(1){
        printf("input number : ");
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

int max(int num1, int num2){
    
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int min(int num1, int num2){
    
    if(num1 < num2){
        return num1;
    }else{
        return num2;
    }
}
//*/
