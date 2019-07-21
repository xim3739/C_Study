/*/
#include <stdio.h>

int main() {
    
    int height = 0;
    int age = 0;
    
    
    while(1){
        printf("키를 입력하세요 : ");
        scanf("%d", &height);
        if(height < 80 || height > 200){
            printf("다시 입력하세요 \n");
            continue;
        }else
            break;
    }
    
    while(1){
        printf("나이를 입력하세요 : ");
        scanf("%d", &age);
        if(age < 5 || age > 100){
            printf("다시 입력하세요 \n");
            continue;
        }else
            break;
    }
    
    if(height >= 140 && age >= 10){
        printf("타도 좋습니다. \n");
    }else{
        printf("탈 수 없습니다. \n");
    }
    
    
    return 0;
}
//*/
