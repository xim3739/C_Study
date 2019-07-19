/*/
#include <stdio.h>

int main() {
    
    int num1 = 0, num2 = 0, num3 = 0;
    int max = 0;
 
    while(1){
        
        printf("input : ");
        scanf("%d", &num1);
        printf("input : ");
        scanf("%d", &num2);
        printf("input : ");
        scanf("%d", &num3);
        
        if(num1>num2){
            max=num1;
        }
        else if(num2>num3){
            max=num2;
        }else if((num1 == 0) && (num2 == 0) && (num3 == 0)){
            max = 0;
            break;
        }
        else{
            max=num3;
        }
        
        printf("result : %d\n", max);
            
        }
    printf("END!!! \n");
    return 0;
}
//*/
