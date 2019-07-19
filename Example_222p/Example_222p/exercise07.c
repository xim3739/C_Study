/*/
#include <stdio.h>


int main() {
    
    double weight = 0.0;
    double height = 0.0;
    double avgWeight = 0.0;
    
    while(1){
        printf("체중과 키를 입력하세요 (키, 체중) : ");
        rewind(stdin);
        scanf("%lf %lf", &weight, &height);
        if(weight < 1 || height < 1){
            printf("다시 입력하세요. \n");
        }else
            break;
    }
    avgWeight = (height - 100) * 0.9;
    
    if(avgWeight < weight){
        printf("과체중입니다. \n");
    }
    else{
        printf("저체중입니다. \n");
    }
    return 0;
}
//*/
