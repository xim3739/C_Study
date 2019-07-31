/*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define HEIGHT_SIZE 3
#define WIDTH_SIZE 10

int main() {
    
    int num = 0;
    int numArray[HEIGHT_SIZE][WIDTH_SIZE] = { };
    int i = 0;
    int j = 0;
    
    printf("input number : ");
    scanf("%d",&num);
    
    for(i = 1; i <= WIDTH_SIZE; i++) {
        for(j = 1; j <= HEIGHT_SIZE; j++) {
            if(j == 1){
                numArray[i-1][j-1] = i;
            }else if(j == 2){
                numArray[i-1][j-1] = i * i;
            }else if(j == 3){
                numArray[i-1][j-1] = i * i * i;
            }
        }
    }
    
    for(i = 0; i < WIDTH_SIZE; i++) {
        for(j = 0; j < HEIGHT_SIZE; j++) {
            printf("numArray[%d][%d] = %d \n",i,j,numArray[i][j]);
        }
    }
    
    for(i = 0; i < WIDTH_SIZE; i++) {
        for(j = 0; j < HEIGHT_SIZE; j++) {
            if(num == numArray[i][j]) {
                printf("%d \n", numArray[i][j-j]);
                exit(1);
            }
        }
    }
    
    
    
    
    return 0;
}

//*/
