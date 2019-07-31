/*/
#include <stdio.h>

int main() {

    int num = 0;
    int i = 0;
    int j = 0;
    int sum = 0;
    int familyArray[3][3] = { };
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            
            printf("%d 층 %d 호의 가족은 몇 명입니까? : ", i + 1, j + 1);
            scanf("%d",&num);
            familyArray[i][j] = num;
            sum = sum + familyArray[i][j];
            
        }
    }
    
    printf("열혈 아파트 총 주민수는 %d 명 입니다. \n",sum);
    
    return 0;
}
//*/
