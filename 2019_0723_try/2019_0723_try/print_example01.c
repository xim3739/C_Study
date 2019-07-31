/*/
#include <stdio.h>
#define SIZE 12

int main() {
    
    int days[SIZE] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i = 0;
    
    for(i = 0; i < SIZE; i++) {
        printf("%d 월은 %d 일까지 있습니다. \n", i+1,days[i]);
    }
    
    return 0;
}
//*/
