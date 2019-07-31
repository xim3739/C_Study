/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define HEIGHT_SIZE 3
#define WIDTH_SIZE 5

int main() {
    
    int randomArray [HEIGHT_SIZE][WIDTH_SIZE] = { };
    int randomValue = 0;
    int heightSum = 0;
    int widthSum = 0;
    int i = 0;
    int j = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < HEIGHT_SIZE; i++) {
        for(j = 0; j < WIDTH_SIZE; j++) {
            randomValue = rand() % 100 + 1;
            randomArray[i][j] = randomValue;
        }
    }
    
    //배열 표시
    for(i = 0; i < HEIGHT_SIZE; i++) {
        for(j = 0; j < WIDTH_SIZE; j++) {
            printf("%d ", randomArray[i][j]);
        }
        printf("\n");
    }
    printf("\n");
 
    //행 의 합
    for(i = 0; i < WIDTH_SIZE; i++) {
        for(j = 0; j < HEIGHT_SIZE; j++) {
            heightSum = heightSum + randomArray[j][i];
        }
        printf("heightSum = %d ", heightSum);
        printf("\n");
        heightSum = 0;
    }
    printf("\n");
    
    //열 의 합
    for (i = 0; i < HEIGHT_SIZE; i++) {
        for(j = 0; j < WIDTH_SIZE; j++) {
            widthSum = widthSum + randomArray[i][j];
        }
        printf("widthSum = %d", widthSum);
        printf("\n");
        widthSum = 0;
    }
    return 0;
}
//*/
