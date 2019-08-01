//*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input_scalar(void);
void input_random(int a[][3], int size1, int size2);
void scalar_multy(int a[][3], int b[][3], int scalar, int size1, int size2);
void transpose(int a[][3], int b[][3], int size1, int size2);
void print_array(int a[][3], int b[][3], int size1, int size2);

int main() {
    
    int a[3][3] = {0, };
    int b[3][3] = {0, };
    int scalarNum = 0;
    
    scalarNum = input_scalar();
    
    input_random(a, sizeof(a)/sizeof(a[0]), sizeof(a[0])/sizeof(int));
    
    scalar_multy(a, b, scalarNum, sizeof(a)/sizeof(a[0]), sizeof(a[0])/sizeof(int));
    
    print_array(a, b, sizeof(a)/sizeof(a[0]), sizeof(a[0])/ sizeof(int));
    
    printf("=== trnspose ==== \n");
    
    transpose(a, b, sizeof(a)/sizeof(a[0]), sizeof(a[0])/sizeof(int));
    
    print_array(a, b, sizeof(a)/sizeof(a[0]), sizeof(a[0])/sizeof(int));
    
    return 0;
}

int input_scalar(void) {
    
    int scalar = 0;
    
    printf("input scalar : ");
    scanf("%d", &scalar);
    
    return scalar;
}

void input_random(int a[][3], int size1, int size2) {
    
    int i = 0;
    int j = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++) {
            a[i][j] = rand() % 10 + 1;
        }
    }
    
    return;
}

void scalar_multy(int a[][3], int b[][3], int scalar, int size1, int size2) {
    
    int i = 0;
    int j = 0;
    
    for(i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++){
            b[i][j] = a[i][j] * scalar;
        }
    }
    
    return;
}

void transpose(int a[][3], int b[][3], int size1, int size2) {
    
    int i = 0;
    int j = 0;
    
    for(i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++) {
            b[i][j] = a[j][i];
        }
    }
    
    return;
}

void print_array(int a[][3], int b[][3], int size1, int size2){
    
    int i = 0;
    int j = 0;
    
    for(i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++) {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++) {
            printf("%2d ",b[i][j]);
        }
        printf("\n");
    }
    
    return;
}
//*/
