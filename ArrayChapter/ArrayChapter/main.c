//*/
#include <stdio.h>

int main() {
    
    int array[3] = { };
    int total = 0;
    int i = 0;
    
    for(i = 0; i < 3; i++) {
        printf("array[%d] = ",i);
        scanf("%d", &array[i]);
        total = total + array[i];
    }
    
    printf("sum = %d \n", total);
    printf("avg = %.2lf \n", (double)total/3);
      
    return 0;
}
//*/
