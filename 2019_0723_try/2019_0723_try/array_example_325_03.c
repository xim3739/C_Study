/*/
#include <stdio.h>

int main() {
    
    int i = 0, j = 0;
    int multy = 0;
    int myArray [8][8] = {0, };
    
    for(i = 2; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            multy = i * j;
            myArray[i-2][j-1] = multy;
        }
    }
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            printf("%d * %d = %d \n", i+2,j+1,myArray[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

//*/
