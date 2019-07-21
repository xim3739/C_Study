/*/
#include <stdio.h>

int my_abs(void);
int input_num(void);
void information(void);
void output(int a);

int main() {
    
    int result = 0;
    
    information();
    result = my_abs();
    
    output(result);
    
    return 0;
}

void information(void) {
    printf("== start program == \n");
    printf("input number : ");
    return;
}
int my_abs(void) {
    int num = 0;
    while(1){
        scanf("%d", &num);
        if(num < -100 && num > 100){
            printf("wrong input number... try again \n");
            continue;
        }else
            break;
    }
    if(num < 0){
        num = -num;
    }else{
        num = num;
    }
    
    return num;
}


void output(int a) {
    
    printf("A cut-off value : %d \n", a);
    
    return;
}
//*/
