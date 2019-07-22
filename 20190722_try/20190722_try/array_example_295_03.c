/*/
#include <stdio.h>

int main() {
    
    int widthSum1 = 0, widthSum2 = 0, widthSum3 = 0, heightSum1 = 0, heightSum2 = 0, heightSum3 = 0, heightSum4 = 0, heightSum5 = 0, totalSum = 0;
    int array1 [5] = {90, 78, 77, 98, 98};
    int array2 [5] = {80, 45, 67, 88, 57};
    int array3 [5] = {88, 99, 65, 55, 74};
    int i = 0;
    
    for(i = 0; i < 5; i++){
        widthSum1 = widthSum1 + array1[i];
    }
    printf("first width Sum : %d \n", widthSum1);
    for(i = 0; i < 5; i++){
        widthSum2 = widthSum2 + array2[i];
    }
    printf("second width Sum : %d \n", widthSum2);
    for(i = 0; i < 5; i++){
        widthSum3 = widthSum3 + array3[i];
    }
    printf("third width Sum : %d \n", widthSum3);
    
    heightSum1 = array1[0] + array2[0] + array3[0];
    heightSum2 = array1[1] + array2[1] + array3[1];
    heightSum3 = array1[2] + array2[2] + array3[2];
    heightSum4 = array1[3] + array2[3] + array3[3];
    heightSum5 = array1[4] + array2[4] + array3[4];
    
    for(i = 0; i < 5; i++){
        totalSum = totalSum + array1[i] + array2[i] + array3[i];
    }
    
    printf("frist height sum : %d \n", heightSum1);
    printf("frist height sum : %d \n", heightSum2);
    printf("frist height sum : %d \n", heightSum3);
    printf("frist height sum : %d \n", heightSum4);
    printf("frist height sum : %d \n", heightSum5);
    
    printf("totla sum : %d \n", totalSum);
    
    
    return 0;
}
//*/
