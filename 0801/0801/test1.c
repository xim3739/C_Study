/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define SIZE 5

void random_array(int a[], int size);
void array_equal(int a[], int b[], int size);
void print_array(int a[], int b[], int size);

int main() {
    
    int array1[SIZE] = {0, };
    int array2[SIZE] = {0, };
    
    random_array(array1, SIZE);
    sleep(1);
    random_array(array2, SIZE);
    
    print_array(array1, array2, SIZE);

    array_equal(array1, array2, SIZE);
    
    
    return 0;
}

void random_array(int a[], int size) {
    
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < size; i++) {
        a[i] = rand() % 55 + 1;
    }
    
    return;
}

void print_array(int a[], int b[], int size) {
    int i = 0;
    for(i = 0; i < size; i++) {
        printf("%3d", a[i]);
    }
    printf("\n");
    for(i = 0; i < size; i++) {
        printf("%3d", b[i]);
    }
    printf("\n");
}

void array_equal(int a[], int b[], int size) {
    
    int i = 0;
    int result = 0;
    
    for(i = 0; i < size; i++) {
        if(a[i] == b[i]) {
            result = 0;
        }else if(a[i] < b[i]) {
            result = -1;
        }else if(a[i] > b[i])
            result = 1;
    }
    
    if(result == 0) {
        printf("같습니다. \n");
    }else if(result == 1) {
        printf("a가 큽니다. \n");
    }else if(result == -1) {
        printf("a가 작습니다. \n");
    }
    
    return;
}
//*/
