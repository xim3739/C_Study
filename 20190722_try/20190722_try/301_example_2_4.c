/*/
#include <stdio.h>

int main() {
    
    int array[2][2] = { };
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("input number : ");
            scanf("%d", &array[i][j]);
        }
    }
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//*/
