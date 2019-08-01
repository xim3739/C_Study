/*/
#include <stdio.h>
#define SIZE 3

void input_array(int* arr);
int vector_dot_prod(int* z, int* y);

int main() {
    
    int arrayX [SIZE] = {0, };
    int arrayY [SIZE] = {0, };
    int result = 0;
    
    input_array(arrayX);
    input_array(arrayY);
    
    result = vector_dot_prod(arrayX, arrayY);
    
    printf("result : %d \n", result);
    
    return 0;
}

void input_array(int* arr) {
    
    int num = 0;
    int i = 0;
    
    for(i = 0; i < SIZE; i++) {
        printf("input number : ");
        scanf("%d", &num);
        arr[i] = num;
    }
    
    return;
}

int vector_dot_prod(int* z, int* y){
    
    int result = 0;
    int i = 0;
    
    for(i = 0; i < SIZE; i++) {
        result = result + (z[i] * y[i]);
    }
    
    return result;
}
//*/
