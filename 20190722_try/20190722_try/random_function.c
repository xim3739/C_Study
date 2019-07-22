/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int com_guesse_value(void);
int uesr_guesse_value(void);
void match_result(int userValue, int comValue);

int main() {
    
    int userGuesse = 0;
    int comGuesse = 0;
        
        comGuesse = com_guesse_value();
        
        userGuesse = uesr_guesse_value();
        
        match_result(comGuesse,userGuesse);
    
        return 0;
}

int com_guesse_value(void){
    
    int comGuesse = 0;
    
    srand((unsigned)time(NULL));
    comGuesse = rand() % (3 - 1 + 1) + 1;      //(최고값 - 최저값 + 1) + 최저값;
    
    return comGuesse;
    
}

int uesr_guesse_value(void){
    
    int userGuesse = 0;
    
    while(1){
        printf("선택하시오. (1. 가위 2. 바위 3. 보 종료키.0) : ");
        scanf("%d", &userGuesse);
        if(userGuesse < 0 || userGuesse > 3){
            printf("다시 입력하세요. \n");
        }else{
            break;
        }
        break;
    }
    
    return userGuesse;
    
}

void match_result(int userGuesse, int comGuesse) {
    
    if(userGuesse == comGuesse){
        printf("비겼습니다. \n");
    }else if(userGuesse > comGuesse) {
        printf("이겼습니다. \n");
    }else{
        printf("졌습니다. \n");
    }
    
    switch (userGuesse - comGuesse) {
        case 0:
            printf("비겼습니다. \n");
            break;
        case 1: case -2:
            printf("이겼습니다. \n");
            break;
        case -1: case 2:
            printf("졌습니다. \n");
            break;
        default:
            printf("잘못입력하셨습니다. \n");
            break;
    }
 
    
    return;
    
}
//*/
