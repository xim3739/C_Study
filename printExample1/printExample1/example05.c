/*/
#include <stdio.h>
#include <unistd.h>

int main() {
    
    int countNum = 0;
    
    while(1){
        
        printf("카운터의 초기값을 입력하세요 : ");
        scanf("%d", &countNum);
        
        if(countNum < 1 || countNum > 10){
            
            printf("%d를 입력하였습니다. 다시 입력하세요 \n", countNum);
            
        }
        
        else{
            
            for( ; countNum > 0; countNum-- ){
                
                printf("%d ", countNum);
                sleep(1);
                
            }
            
            break;
            
        }
        
    }
    
    printf(" \a \n");
    
    return 0;
}
//*/
