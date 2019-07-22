/*/
#include <stdio.h>

int main() {
    
    int array1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i = 0, j = 0;
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n\n");
    
    
    for(i = 0; i < 4; i++){
        
        printf("%d %d ",array1[1][i], array1[0][i]);
        printf("\n");
    }
    
    return 0;
}
//0.0 0.1 0.2 0.3
//1.0 1.1 1.2 1.3

// 1.0 0.0
// 1.1 0.1
// 1.2 0.2
// 1.3 0.3
// 1과 0은 고정이다. for문을 0~ 3까지 돌리면 된다.

//*/
