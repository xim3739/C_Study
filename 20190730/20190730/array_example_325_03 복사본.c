/*/
#include <stdio.h>

int main() {
    
    int i = 0, j = 0;
    int multy = 0;
    int myArray [9][9] = { };
    
    for(i = 2; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            multy = i * j;
            myArray[i-2][j-1] = multy;
        }
    }
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            printf("%d \n",myArray[i][j]);
        }
    }
    
    return 0;
}

//*/
