/*/
#include <stdio.h>

int input(void);
int my_sum(int number);
void output(int sum);

int main() {
    
    int num= 0;
    int sum = 0;
    
    num = input();
    sum = my_sum(num);
    output(sum);
    
    return 0;
}

int input(void){
    
    int number = 0;
    
    printf("input number : ");
    scanf("%d", &number);
    
    return number;
}

int my_sum(int number){
    
    int i = 0, sum = 0;
    
    for(i = 1; i <= number; i++){
        sum = sum + i;
    }
    
    return sum;
}

void output(int sum){
    
    printf("result : %d \n", sum);
    return;
}
//*/
