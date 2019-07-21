/*/
#include <stdio.h>

int main() {
    
    int num = 0, rNum = 0, i = 0, nPr = 1;
    
    while(1){
        
        while(1){
            printf("n 의 값 (1 ~ 10) : ");
            scanf("%d", &num);
            if(num < 1 || num > 10){
                printf("%d를 입력하였습니다. 다시 입력하세요.\n", num);
                continue;
            } else
                break;
        }
        
        while(1){                      //r의 값이 n 값을 넘어가면 안된당....
            printf("r 의 값 (n 값보다 작아야합니다.) : ");
            scanf("%d", &rNum);
            if(rNum < 1 || rNum > 10){
                printf("%d를 입력하였습니다. 다시 입력하세요. \n", rNum);
                continue;
            } else
                break;
            
        }
        for(i = num; i >= (num-rNum+1); i--){
            nPr = nPr*i;
        }
        break;
    }
        
    printf("순열의 값은 %d 입니다. \n", nPr);
    
    return 0;
}
//*/
