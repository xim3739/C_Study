/*/
#include <stdio.h>

int main() {
    
    double weight = 0.0;
    double height = 0.0;
    double avgWeight = 0.0;
    
    while(1){
        printf("키를 입력하세요 : ");
        scanf("%lf", &height);
        if(height < 100 || height > 200){
            printf("다시 입력하세요 \n");
            continue;
        }else
            break;
    }
    
    while(1){
        printf("몸무게를 입력하세요 : ");
        scanf("%lf", &weight);
        if(weight < 30 || weight > 150){
            printf("다시 입력하세요 \n");
            continue;
        }else
            break;
    }
    
    avgWeight = (height-100) * 0.9;
    
    if(avgWeight > weight){
        printf("저체중 입니다. \n");
    }else if (avgWeight < weight){
        printf("과체중 입니다. \n");
    }else {
        printf("표준체중입니다. \n");
    }
    
    return 0;
}
//*/
