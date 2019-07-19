/*/
#include <stdio.h>

int main() {
    
    int score = 0;
    
    while(1){
        printf("점수를 입력하세요 : ");
        rewind(stdin);
        scanf("%d", &score);
 
        if(score < 0 || score > 100){
            printf("%d 를 입력하였습니다. 다시 입력하세요 \n",score);
        }
        if(score == 0){
            printf("종료한다. \n");
            break;
        }
        else{
            switch (score/10) {
                case 10: case 9:
                    printf("A \n");
                    break;
                case 8:
                    printf("B \n");
                    break;
                default:
                    printf("F \n");
                    break;
            }
        }
    }
    
    return 0;
}
//*/
