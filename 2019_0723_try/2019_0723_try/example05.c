/*/
#include <stdio.h>

int main() {
    
    int array[2][3] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("array[%d][%d] = *(*(array + [%d]) + [%d]) \n", i,j,i,j);
            printf("%d \n",*(*(array + i) + j));
            printf("%x \n",&(*(*(array + i) + j)));
        }
    }
    
    return 0;
}
//*/
