/*/
#include <stdio.h>
#define SIZE 5

void array_equal(int* a, int* b, int size);

int main() {
    
    int array1 [SIZE] = {1, 2, 3, 4, 5};
    int array2 [ ] = { };
    int i = 0;
    
    for(i = 0; i < SIZE; i++) {
        printf("array1[%d] = %d \n", i, array1[i]);
    }
    
    array_equal(array1, array2, SIZE);
    
    return 0;
}

void array_equal(int* a, int* b, int size) {
    
    int i = 0;
    
    for(i = 0; i < size; i++) {
        b[i] = a[i];
    }
    
    for(i = 0; i < size; i++) {
        printf("array2[%d] = %d \n", i, b[i]);
    }
    
    return;
}
//*/
