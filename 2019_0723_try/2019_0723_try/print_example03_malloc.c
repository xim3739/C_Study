//*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int array_equal(int* m1, int* m2, int arraySize1, int arraySize2);
void input_random(int* m, int arraySize);
int input_size(void);

int main() {
    
    int result = 0;
    int array1Size = 0;
    int array2Size = 0;
    int i = 0;
    int *m1 = NULL;
    int *m2 = NULL;
    
    srand((unsigned)time(NULL));
    
    array1Size = rand() % 10 + 1;
    sleep(1);
    array2Size = rand() % 10 + 1;
    
    printf("%d ", array1Size);
    printf("%d \n", array2Size);
    m1 = (int*) malloc(sizeof(int) * array1Size);
    m2 = (int*) malloc(sizeof(int) * array2Size);
    
    input_random(m1, array1Size);
    sleep(1);
    input_random(m2, array2Size);
    
    for(int i = 0; i < array1Size; i++) {
        printf("%d ", m1[i]);
    }
    printf("\n");
    
    for(i = 0; i < array2Size; i++) {
        printf("%d ", m2[i]);
    }
    printf("\n");

    result = array_equal(m1, m2, sizeof(m1)/sizeof(int), sizeof(m2)/sizeof(int));
    
    printf("%d \n", result);
    
    return 0;
}

int input_size(void) {
    
    int size = 0;
    
    while(1){
        printf("input size : ");
        scanf("%d", &size);
        
        if(size < 1 || size > 10) {
            printf("wrong input size ... try again. \n");
        }else {
            break;
        }
    }
    
    return size;
}

void input_random(int* m, int size) {
    
    int random = 0;
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < size; i++) {
        random = rand() % 10 + 1;
        m[i] = random;
    }
    
    return;
}

int array_equal(int* m1, int* m2, int arraySize1, int arraySize2){
    
    int i = 0;
    int result = 0;
    int result2 = 0;
    
    for(i = 0; i < arraySize1; i++) {
        if(m1[i] == m2[i]) {
            result = 1;
        }else {
            result = 0;
            break;
        }
    }
    
    if(arraySize1 == arraySize2) {
        result2 = 1;
    }else {
        result2 = 0;
    }
    
    if(result == 1 && result2 == 1){
        return result;
    }else {
        return result;
    }
}
//*/
