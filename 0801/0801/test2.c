/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define SIZE 5

void input_random(int a[], int size);
void copy_array(int a[], int b[], int size);
void print_array(int a[], int b[], int size);

int main() {
    
    int array1 [SIZE] = {0, };
    int array2 [SIZE] = {0, };
    
    srand((unsigned)time(NULL));
    
    input_random(array1, SIZE);
    
    copy_array(array1, array2, SIZE);
    
    print_array(array1, array2, SIZE);
    
    return 0;
}

void input_random(int a[], int size) {
    
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < size; i++) {
        a[i] = rand() % 55 + 1;
    }
    
    return;
}

void copy_array(int a[], int b[], int size) {
    
    int i = 0;
    
    for(i = 0; i < size; i++) {
        b[i] = a[i];
    }
    
    return;
}

void print_array(int a[], int b[], int size) {
    
    int i = 0;
    printf("array1 : ");
    for(i = 0; i < size; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");
    
    printf("array2 : ");
    for(i = 0; i < size; i++) {
        printf("%4d", b[i]);
    }
    printf("\n");
    
    return;
}
//*/
