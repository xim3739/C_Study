/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENT_NUM 10
#define SIZE 4

int main() {
    
    int class[STUDENT_NUM][SIZE] = { };
    int i = 0;
    int j = 0;
    int max = 0;
    int min = 0;
    int randomValue = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < STUDENT_NUM; i++) {
        class[i][0] = i + 1;
    }
    
    for(i = 0; i < STUDENT_NUM; i++){
        for(j = 1; j < SIZE; j++) {
            randomValue = rand() % 100 + 1;
            class[i][j] = randomValue;
        }
    }
    
    for(i = 0; i < STUDENT_NUM; i++) {
        for(j = 0; j < SIZE; j++) {
            printf("%d  ",class[i][j]);
        }
        printf("\n");
    }
    
    //큰 값 구하기
    max = class[0][1];
    
    for(i = 0; i < STUDENT_NUM; i++) {
        
        if(max > class[i][1]){
            max = max;
        } else {
            max = class[i][1];
        }
        
    }
    printf("첫번째 최대 점수 %d \n", max);
    
    max = 0;
    max = class[0][2];
    
    for(i = 0; i < STUDENT_NUM; i++) {
        
        if(max > class[i][2]){
            max = max;
        } else {
            max = class[i][2];
        }
        
    }
    printf("두번째 최대 점수 %d \n", max);
    
    max = 0;
    max = class[0][3];
    
    for(i = 0; i < STUDENT_NUM; i++) {
        
        if(max > class[i][3]){
            max = max;
        } else {
            max = class[i][3];
        }
        
    }
    printf("세번째 최대 점수 %d \n", max);
    
    //작은 값 구하기
    min = class[0][1];
    
    for(i = 0; i < STUDENT_NUM; i++) {
        
        if(min < class[i][1]){
            min = min;
        } else {
            min = class[i][1];
        }
        
    }
    printf("첫번쨰 최소 점수 %d \n", min);
    
    min = 0;
    min = class[0][2];
    
    for(i = 0; i < STUDENT_NUM; i++) {
        
        if(min < class[i][2]){
            min = min;
        } else {
            min = class[i][2];
        }
        
    }
    printf("두번쨰 최소 점수 %d \n", min);
    
    min = 0;
    min = class[0][3];
    
    for(i = 0; i < STUDENT_NUM; i++) {
        
        if(min < class[i][3]){
            min = min;
        } else {
            min = class[i][3];
        }
        
    }
    printf("세번쨰 최소 점수 %d \n", min);
    
    
    return 0;
}
//*/
