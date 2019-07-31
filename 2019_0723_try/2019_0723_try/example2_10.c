/*/
#include <stdio.h>

int main() {
    
    int array[2][2] = {10, 20 ,30 ,40};
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%x ", &array[i][j]);
        }
        printf("\n");
    }
    
    printf("=================\n");
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%x ", array[i]+j);
        }
        printf("\n");
    }
    
    printf("=================\n");
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%x ", *(array + i) + j);
        }
        printf("\n");
    }
    
    
    return 0;
}
//*/
