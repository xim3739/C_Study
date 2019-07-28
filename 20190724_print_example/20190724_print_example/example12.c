/*/
#include <stdio.h>

int input_number(void);
void is_prime(void);
void match_prime(int num);

int main(){
    
    int num = 0;
    
    num = input_number();
    
    match_prime(num);
    
    is_prime();
    
    return 0;
}

int input_number(void){
    
    int num = 0;
    
    while(1){
        
        printf("input number (1 ~ 100) : ");
        scanf("%d", &num);
        if(num < 0 || num > 100){
            printf("input wrong number ... try again. \n");
        }else{
            break;
        }
    }
    
    return num;
}

void is_prime(void){
    
    int i = 0, j = 0;
    
    for(i = 2; i <= 100; i++){
        for(j = 2; j <= i; j++){
            if(i % j ==0){
                break;
            }
        }
        
        if(i == j){
            printf("%d ", i);
        }
    }
    return;
}

void match_prime(int num){
    
    int i = 0, j = 0;
    int matchFlage = 0;
    
    for(i = 2; i <= 100; i++){
        for(j = 2; j <= i; j++){
            if(i % j == 0){
                break;
            }
            if(num == i){
                matchFlage = 1;
            }
        }
    }
    if(matchFlage == 1){
        printf("%d is prime \n", num);
    }else{
        printf("%d is not prime \n", num);
    }
    
    return;
}
//*/
