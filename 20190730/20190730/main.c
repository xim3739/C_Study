/*/
#include <stdio.h>

int add(int(*p)[2]);

int main() {

    int a[2][2] = {10,20,30,40};
    int i = 0;
    int j = 0;
    int sum = 0;
    
    for(i = 0; i <= 1; i++) {
        for(j = 0; j <= 1; j++) {
        printf("a[%d][%d] = %d \n",i, j, a[i][j]);
        }
    }
    
    sum = add(a);
    
    printf("%d \n", sum);
    
    return 0;
}

int add(int(*a)[2]){
    
    int sum = 0;
    int r = 0;
    int i = 0;
    
    for(i = 0; i <= 1; i++) {
        for(r = 0; r <= 1; r++) {
            sum = sum + a[i][r];
        }
    }
    
    return sum;
    
}

#include <stdio.h>

int my_sum(int* array);

int main() {
    
    int array[4] = {10, 20, 30, 40};
    int sum = 0;
    int i = 0;
    
    for(i = 0; i < 4; i++) {
        printf("array[%d] = %d \n", i,array[i]);
    }
    
    
    sum = my_sum(array);
    
    printf("%d \n", sum);
    return 0;
}

int my_sum(int* array){
    
    
    int sum = 0;
    int i = 0;
    
    for(i = 0; i < 4; i++) {
        sum = sum + array[i];
    }
    
    return sum;
}
//*/
