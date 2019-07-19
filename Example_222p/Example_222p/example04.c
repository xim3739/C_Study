/*/
#include <stdio.h>

int main() {
    
    int i = 0;
    int result = 0;
    
    for(i = 1; i <= 100; i++) {
        if(i % 2 == 1){
            result = i;
            printf("%d ", result);
        }
    }
    
    return 0;
}
//*/
