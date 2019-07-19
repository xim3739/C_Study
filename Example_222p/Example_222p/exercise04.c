/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));
    
    int random = rand();
    int user = 0;
    int comWinCount = 0;
    int drawCount = 0;
    
    while(1) {
        printf("선택하시오 (1: 가위 2: 바위 3: 보) : ");
        scanf("%d", &user);
        if(user < 1 || user >= 4) {
            printf("다시 입력해요 \n");
            continue;
        }
        
        random = rand() % 3+1;
        
        printf("COM : %d \n", random);
        
        if(user > random){
            printf("YOU WIN \n");
            break;
        }else if(user < random){
            printf("DRAW \n");
            drawCount++;
            printf("DRAW count : %d \n", drawCount);
            
        }else {
            printf("COM WIN \n");
            comWinCount++;
            printf("COM win count : %d \n", comWinCount);
        }
    }
    
    return 0;
}
//*/
