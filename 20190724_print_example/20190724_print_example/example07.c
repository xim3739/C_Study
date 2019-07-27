/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input_number(void);
int b_rand(void);
void match_result(int num, int guesseNum);
char input_regame(void);

int main(){
    
    int num = 0;
    int guesseNum = 0;
    char regame = 0;
    
    while(1){
        num = input_number();
        guesseNum = b_rand();
        match_result(num, guesseNum);
        regame = input_regame();
        if(regame == 'Y' || regame == 'y'){
            continue;
        }else if(regame == 'N' || regame == 'n'){
            printf("exit game THANKS!!! \n");
            exit(1);
        }
            
    }
    
    return 0;
}

int input_number(void){
    
    int num = 0;
    
    while(1){
        printf("input number (1 or 0) : ");
        scanf("%d", &num);
        if(num < 0 || num > 1) {
            printf("input wrong number ... try again!!! \n");
        }else {
            break;
        }
    }
    
    return num;
}

int b_rand(void){
    
    int result = 0;
    
    result = (rand() % 2 );
    
    return result;
}

void match_result(int num, int guesseNum){
    
    if(num > guesseNum){
        printf("YOU WIN !!! \n");
    }else if(num == guesseNum){
        printf("YOU DRAW !!! \n");
    }else{
        printf("YOU LOSE !!! \n");
    }
    
    return;
}

char input_regame(void){
    
    char regame = 0;
    
    while(1){
        printf("try again?? ('Y'es or 'N'o) : ");
        rewind(stdin);
        scanf("%c", &regame);
        if(regame != 'Y' && regame != 'y' && regame != 'N' && regame != 'n'){
            
            printf("input wrong words ... try again!!! \n");
            
        }else {
            
            break;
        }
    }
    
    return regame;
}
//*/
