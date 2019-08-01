/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10
#define RANDOM_SIZE 100

void input_random(int a[]);
void print_array(int a[]);
void max_find(int a[]);

int main() {
    
    int arrray [ARRAY_SIZE] = {0, };
    
    input_random(arrray);
    print_array(arrray);
    max_find(arrray);
    
    return 0;
}

void input_random(int a[]) {
    
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < RANDOM_SIZE; i++) {
        a[rand() % ARRAY_SIZE]++;
    }
    
    return;
}

void print_array(int a[]) {
    
    int i = 0;
    
    for(i = 0; i < ARRAY_SIZE; i++) {
        printf("array[%d] = %d \n",i ,a[i]);
    }
    
    return;
}

void max_find(int a[]) {
    
    int i = 0;
    int max = 0;
    int maxIndex = 0;
    
    max = a[0];
    for(i = 0; i < ARRAY_SIZE; i++) {
        if(max < a[i]){
            max = a[i];
            maxIndex = i;
        }
    }
    
    printf("가장 많이 생성된 수 : %d , %d번 \n", maxIndex, max);
    
    return;
}
//*/
