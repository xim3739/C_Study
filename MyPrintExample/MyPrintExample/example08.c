/*/
#include <stdio.h>
#include <stdlib.h>

int input_number(void);
void show_digit(int num);

int num = 0;

int main() {
    
    num = input_number();
    
    show_digit(num);
    
    return 0;
}

int input_number(void){
    
    int num = 0;
    
    printf("input number : ");
    scanf("%d", &num);
    
    return num;
}

void show_digit(int num){
    
    if(num == 0)
        return;
    
    show_digit(num/10);
    printf("%d ", num % 10);
        
    
}
//*/
