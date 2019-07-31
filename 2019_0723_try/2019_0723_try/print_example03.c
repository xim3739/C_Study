/*/
#include <stdio.h>
#define FIRST_SIZE 4
#define SECOND_SIZE 5

int array_equal(int* a, int* b, int size, int size2);
void input_array1(int* a);
void input_array2(int* b);

int main() {
    
    int array1 [FIRST_SIZE] = {1, 2, 3, 4};
    int array2 [SECOND_SIZE] = {1, 2, 3, 4, 5};
    int result = 0;
    
    result = array_equal(array1, array2, FIRST_SIZE, SECOND_SIZE);
    
    printf("%d \n", result);
    
    return 0;
}

int array_equal(int* a, int* b, int size, int size2){
    
    int i = 0;
    int result = 0;
    
    for(i = 0; i < size; i++) {
        if((a[i] == b[i]) && (a[size - i] == b[size2 - i])) {
            result = 1;
        }else {
            result = 0;
        }
    }
    
    return result;
}
//*/
