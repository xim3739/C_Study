/*/
#include <stdio.h>

int main() {
    
    int i = 0;
    int starNum = 0;
    
    while(1){
        
        printf("막대의 길이 (종료 : -1) : ");
        scanf("%d", &starNum);
        
        if(starNum == -1){
            printf("%d 를 입력하였습니다. 종료합니다. \n", starNum);
            break;
        }
        
            if(starNum < 1 || starNum > 50){
                
                printf("%d 를 입력하였습니다. 다시 입력하세요. \n", starNum);
                
            }
        
            else {
                
                for(i = 1; i < starNum; i++) {
                    
                    printf("*");
                    
                }
                printf("\n");
            }
        
        }
    
    return 0;
    
}
//*/
