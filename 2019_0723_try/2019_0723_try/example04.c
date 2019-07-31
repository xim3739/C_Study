/*/
#include <stdio.h>

void my_sum(int (*arr1)[3], int (*arr2)[3]);
void my_sub(int (*arr1)[3], int (*arr2)[3]);

int main() {
    
    int array1[4][3] = {23, 75, 85, 12, 77, 51, 25, 66, 30, 19, 90, 88};
    int array2[4][3] = {11, 15, 47, 74, 85, 69, 57, 86, 28, 90, 22, 33};
    
    my_sum(array1, array2);
    my_sub(array1, array2);
    
    return 0;
}

void my_sum(int (*arr1)[3], int (*arr2)[3]) {
    
    int sum = 0;
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            sum = arr1[i][j] + arr2[i][j];
            printf("array1[%d][%d] + array2[%d][%d] = %d \n", i, j, i, j, sum);
        }
    }
    
    return;
}

void my_sub(int (*arr1)[3], int (*arr2)[3]) {
    
    int sub = 0;
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            sub = arr1[i][j] - arr2[i][j];
            printf("array1[%d][%d] - array2[%d][%d] = %d \n", i, j, i, j, sub);
        }
    }
    
    return;
}
//*/
