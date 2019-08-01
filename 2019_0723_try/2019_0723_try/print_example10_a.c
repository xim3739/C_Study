/*/
#include <stdio.h>
#define SIZE 3

void input_array(int* arr);
void vector_add(int* x, int* y, int* z);

int main() {
    
    int arrayX [SIZE] = {0, };
    int arrayY [SIZE] = {0, };
    int arrayZ [SIZE] = {0, };
    int i = 0;
    
    input_array(arrayX);
    input_array(arrayY);
    vector_add(arrayX, arrayY, arrayZ);
    
    for(i = 0; i < SIZE; i++) {
        printf("vector values : %d \n", arrayZ[i]);
    }
    
    return 0;
}

void input_array(int* arr) {
    
    int i = 0;
    int num = 0;
    for(i = 0; i < 3; i++) {
        printf("input number");
        scanf("%d", &num);
        arr[i] = num;
    }
    
    return;
}

void vector_add(int* x, int* y, int* z) {
    
    int i = 0;
    for(i = 0; i < SIZE; i++) {
        z[i] = x[i] + y[i];
    }
    
    return;
}
//*/
