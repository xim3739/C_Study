/*/
#include <stdio.h>

int main() {
    
    int i = 0, inputNum = 0, printfNum = 0;
    
    while(1){
        
        printf("정수를 입력하세요 (1 ~ 10) : ");
        scanf("%d", &inputNum);
        
        if(inputNum < 1 || inputNum > 10){
            
            printf("%d 를 입력하였습니다. 다시 입력하세요. \n", inputNum);
            
        }
        
        else {
    
              for(i = 1; i <= inputNum; i++){
        
                  for(printfNum = 1; printfNum <= i; printfNum++){
                      
                      printf("%d ", printfNum);
                      
                  }
        
                  printf("\n");
              
            }
         
            break;
            
        }
        
    }
    
    return 0;
    
}

//*/
