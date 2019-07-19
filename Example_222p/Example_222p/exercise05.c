/*/
#include <stdio.h>

int main() {
    
    int height = 0, age = 0;
    
    printf("키를 입력하세요 : ");
    rewind(stdin);
    scanf("%d", &height);
    printf("나이를 입력하세요 : ");
    rewind(stdin);
    scanf("%d", &age);
    
    if((height > 140) && (age >= 10)){
        printf("놀이기구에 타는 걸 허락한다...! \n");
    } else {
        printf("가라 애송아... \n");
    }
    
    return 0;
}
//*/
