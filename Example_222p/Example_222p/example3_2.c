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
    else if(score == 0){
        printf("종료한다. \n");
        break;
    }
    else{
        if(score >= 90 && score <= 100 ){
            printf("A \n");
        }else if(score >= 80 && score <= 89) {
            printf("B \n");
        }else{
            printf("F \n");
        }
    }
    
}
 
return 0;
}
//*/
