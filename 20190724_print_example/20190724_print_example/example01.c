/*/
#include <stdio.h>

int input_num(void);
void even(int num);
void absolute(int num);
void sign(int num);

int main() {
    
    int num = 0;
    
    num = input_num();
    even(num);
    absolute(num);
    sign(num);
    
    return 0;
}

int input_num(void) {
    
    int num = 0;
        
        printf("정수를 입력하세요 : ");
        scanf("%d", &num);
    
    return num;
}

void even(int num){
    
    if(num % 2 == 1) {
        printf("is even. \n");
    }else {
        printf("is odd. \n");
    }
    
    return;
}

void absolute(int num){
    
    if(num < 0) {
        printf("absolute is %d \n",num = -num);
    }else if(num == 0) {
        printf("absolute is %d \n",num = 0);
    }else {
        printf("absolute is %d \n", num = num);
    }
    return;
}

void sign(int num){
    if(num < 0) {
        printf("sign is negative number \n");
    }else if(num == 0) {
        printf("sing is zero \n");
    }else {
        printf("sing is Positive number \n");
    }
}
//*/
