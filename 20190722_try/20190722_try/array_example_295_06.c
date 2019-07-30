/*/
#include <stdio.h>

int main() {
    
    char array1[5] = {'A','B','C','D','E'};
    int array2[5] = {10, 20, 30, 40, 50};
    double array3[5] = {10.1, 20.2, 30.3, 40.4, 50.5};
    int i = 0;
    
    //array1
    for(i = 0; i < 5; i++) {
        printf("array1[%d] = %c \n", i,array1[i]);
    }
    
    //array2
    for(i = 0; i < 5; i++) {
        printf("array2[%d] = %d \n", i, array2[i]);
    }
    
    //array3
    for(i = 0; i < 5; i++) {
        printf("array3[%d] = %lf \n", i, array3[i]);
    }
    
    return 0;
}
//*/
