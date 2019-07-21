/*/
#include <stdio.h>

int sum(void);
int input(void);
void output(int x);
void information(void);

int main() {
    
    int result = 0;
    
    information();
    result = sum();
    output(result);
    
    return 0;
}

int sum(void){
    int i =0, total = 0, num = 0;
    
    num=input();
    
    for(i = 1; i <= num; i++){
        total = total + i;
    }
    return total;
}

int input(void){
    int num = 0;
    
    while(1){
        scanf("%d",&num);
        if(num < 1 || num > 100){
            printf("wrong input number... try again \n");
            continue;
        }else
            break;
    }
    
    return num;
}

void information(void){
    printf("== start program == \n");
    printf("input number : ");
    return;
}

void output(int x){
    
    printf("result = %d \n", x);
    return;
    
}
//*/
