/*/
#include <stdio.h>

int input_num(void);
int square(int num);
int cube(int num);
int quartic(int num);
int quintic(int num);
void output_print(int num);

int main() {
    
    int num = 0;
    int i = 0;
    
    num = input_num();
    
    for(i = 1; i <= num; i++) {
        output_print(i);
    }
    
    return 0;
}

int input_num(void){
    
    int num = 0;
    
    while(1){
        
        printf("정수를 입력하세요. (1 ~ 10) : ");
        scanf("%d", &num);
        if(num < 1 || num > 10){
            printf("다시 입력하세요. \n");
        }else {
            break;
        }
        
    }
    
    return num;
}

int square(int num){
    
    return num * num;
}

int cube(int num){
    
    return num * num * num;
}

int quartic(int num){
    
    return num * num * num * num;
}

int quintic(int num){
    
    return num * num * num * num * num;
}

void output_print(int num){
    
    printf("%10d %10d %10d %10d %10d \n", num,square(num),cube(num),quartic(num),quintic(num));
    return;
}
//*/
