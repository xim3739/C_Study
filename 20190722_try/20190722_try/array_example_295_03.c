/*/
#include <stdio.h>

int main() {
    
    int widthSum[3] = { };
    int heighSum[5] = { };
    int array1 [5] = { };
    int array2 [5] = { };
    int array3 [5] = { };
    int i = 0;
    int total = 0;
    
    //입력
    
    for(i = 0; i < 5; i++) {
        printf("array1[%d] : ", i);
        scanf("%d", &array1[i]);
    }
    
    for(i = 0; i < 5; i++) {
        printf("array2[%d] : ", i);
        scanf("%d", &array2[i]);
    }
    
    for(i = 0; i < 5; i++) {
        printf("array3[%d] : ", i);
        scanf("%d", &array3[i]);
    }
    
    //가로 합
    
    for(i = 0; i < 5; i++) {
        widthSum[0] = widthSum[0] + array1[i];
    }
    
    for(i = 0; i < 5; i++) {
        widthSum[1] = widthSum[1] + array2[i];
    }
    
    for(i = 0; i < 5; i++) {
        widthSum[2] = widthSum[2] + array3[i];
    }
    
    //세로합
    
    for(i = 0; i < 5; i++) {
        heighSum[i] = array1[i] + array2[i] + array3[i];
    }
    
    total = widthSum[0] + widthSum[1] + widthSum[2] + heighSum[0] + heighSum[1] + heighSum[2] + heighSum[3] + heighSum[4];
    
    printf("%d      %d      %d      %d      %d      %d \n", array1[0],array1[1],array1[2],array1[3],array1[4],widthSum[0]);
    printf("%d      %d      %d      %d      %d      %d \n", array2[0],array2[1],array2[2],array2[3],array2[4],widthSum[1]);
    printf("%d      %d      %d      %d      %d      %d \n", array3[0],array3[1],array3[2],array3[3],array3[4],widthSum[2]);
    printf("%d    %d     %d     %d     %d     %d \n", heighSum[0],heighSum[1],heighSum[2],heighSum[3],heighSum[4],total);
    
    return 0;
}
//*/
