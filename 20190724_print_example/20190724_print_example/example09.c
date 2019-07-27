/*/
#include <stdio.h>
#include <stdlib.h>

int input_num(void);
void print_value(int num);

int main() {
    
    int num = 0;
    
    while(1){
        num = input_num();
        print_value(num);
    }
    
    return 0;
}

int input_num(void){
    
    int num = 0;
    
    while(1){
        printf("input number (exit is Negative number) : ");
        scanf("%d",&num);
        if(num < 0) {
            printf("Exit Program \n");
            exit(1);
        }else {
            break;
        }
    }
    
    return num;
}

void print_value(int num){
    
    int i = 0;
    
    for(i = 1; i <= num; i++){
        printf("*");
    }
    
    printf("\n");
    
    return;
}

//*/
