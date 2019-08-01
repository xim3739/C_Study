/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MIN 1

void random_array(int a1[], int size);
void array_copy(int a1[], int a2[], int size);
void array_print(int a1[], int a2[], int size);

int main() {
    
    int array1 [5] = {0, };
    int array2 [5] = {0, };
    
    random_array(array1, sizeof(array1)/sizeof(int));
    array_copy(array1, array2, sizeof(array1)/sizeof(int));
    
    array_print(array1, array2, sizeof(array1)/sizeof(int));
    
    return 0;
}

void random_array(int a1[], int size){
    
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < size; i++) {
        a1[i] = rand() % MAX + MIN;
    }
    
    return;
}

void array_copy(int a1[], int a2[], int size) {
    
    int i = 0;
    
    for(i = 0; i < size; i++) {
        
        a2[i] = a1[i];
        
    }
    
    return;
}

void array_print(int a1[], int a2[], int size) {
    
    int i = 0;
    
    for(i = 0; i < size; i++) {
        
        printf("array1[%d] = %d \n", i, a1[i]);
        printf("array2[%d] = %d \n", i, a2[i]);
        
    }
    
    return;
    
}

//*/
