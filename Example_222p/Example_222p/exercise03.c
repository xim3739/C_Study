/*/
#include <stdio.h>

int main(){
    
    int num1 = 0, num2 = 0, num3 = 0;
    int min = 0;
    
    printf("3개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1<num2){
        min=num1;
    }
    else if(num2<num3){
        min=num2;
    }
    else{
        min=num3;
    }
    
    printf("result : %d\n", min);
    
    
    return 0;
}
//*/
