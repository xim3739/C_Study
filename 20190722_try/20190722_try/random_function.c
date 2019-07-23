/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int print_menu(void);
int com_guesse_value(void);
int uesr_guesse_value(void);
void match_game(int userValue, int comValue);
void match_result(void);

int count = 0;
int winCount = 0;
int loseCount = 0;
int drawCount = 0;
double comCountNum1 = 0;
double comCountNum2 = 0;
double comCountNum3 = 0;

int main() {
    
    int userGuesse = 0;
    int comGuesse = 0;
    int selectNum = 0;
    
    while(1){
        
        selectNum = print_menu();
        
        switch (selectNum) {
            case 1:
                while(1){
                    comGuesse = com_guesse_value();
                    userGuesse = uesr_guesse_value();
                    match_game(userGuesse,comGuesse);
                    if(userGuesse == 0){
                        break;
                    }
                }
                break;
                
            case 2:
                match_result();
                
                break;
                
            case 3:
                count = 0;
                winCount = 0;
                loseCount = 0;
                drawCount = 0;
                comCountNum1 = 0;
                comCountNum2 = 0;
                comCountNum3 = 0;
                
                while(1){
                    comGuesse = com_guesse_value();
                    userGuesse = uesr_guesse_value();
                    match_game(userGuesse,comGuesse);
                    if(userGuesse == 0){
                        break;
                    }
                }
                break;
                
            case 4:
                printf("종료합니다 \n");
                exit(1);
                break;
        }
    }
    
        return 0;
}

int print_menu(void){

    int selectNum = 0;
    
    printf("=====================\n");
    printf("    1. 게임 시작\n");
    printf("    2. 게임 결과\n");
    printf("    3. 게임 재시작\n");
    printf("    4. 게임 종료\n");
    printf("=====================\n");
    
    while(1){
        printf("선택 번호 : ");
        scanf("%d",&selectNum);
        if(selectNum < 1 || selectNum > 4){
            printf("다시 입력하세요. \n");
        }else{
            break;
        }
    }
    return selectNum;
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

void match_game(int userGuesse, int comGuesse) {
    
    if(userGuesse >= 4){
        
    }
    else if(userGuesse == 0){
        
    }
    else if(userGuesse == comGuesse){
        count++;
        drawCount++;
        printf("%d vs %d .... ",userGuesse, comGuesse);
        printf("비겼습니다. \n");
    }else if(userGuesse > comGuesse) {
        count++;
        winCount++;
        printf("%d vs %d .... ",userGuesse, comGuesse);
        printf("이겼습니다. \n");
    }else{
        count++;
        loseCount++;
        printf("%d vs %d .... ",userGuesse, comGuesse);
        printf("졌습니다. \n");
    }
    
    if(comGuesse == 1){
        comCountNum1++;
    }else if (comGuesse == 2) {
        comCountNum2++;
    }else{
        comCountNum3++;
    }
    return;
}

void match_result(void){
    
    printf("횟수 : %d ||| 승 : %d ||| 무 : %d ||| 패 : %d \n", count,winCount,drawCount,loseCount);
    printf("컴퓨터가 가위 바위 보 를 낼 확률 : 가위 = %.2lf%% 바위 = %.2lf%% 보 = %.2lf%% \n",
           (comCountNum1/count)*100,(comCountNum2/count)*100,(comCountNum3/count)*100);
    
    return;
}
//*/
