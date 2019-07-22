/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    int i  = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < 10; i++){
        
        printf("%d \n", rand()%(21154 - 4727 + 1) + 4727);
        
    }
    
    return 0;
}

//*/
