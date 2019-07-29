/*/
#include <stdio.h>

int main() {
    
    char array1[6] = { };
    char array2[6] = { };
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 6; i++) {
        printf("array1[%d] : ",i);
        rewind(stdin);
        scanf("%c", &array1[i]);
    }
    
    for(i = 0; i < 6; i++) {
        if(i < 3){
            array2[i] = array1[i];
        }else {
            for(j = 2; j >= 5-i; j--) {
                array2[i] = array1[j];
            }
        }
    }
    
    for(i = 0; i < 6; i++) {
        printf("%c ",array1[i]);
    }
    
    printf("\n");
    
    for(i = 0; i < 6; i++) {
        printf("%c ",array2[i]);
    }
    
    return 0;
}
//*/
