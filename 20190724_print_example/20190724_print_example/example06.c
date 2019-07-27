/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void b_rand(void);


int main() {
    
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 1; i <= 5; i++){
    
        b_rand();
        
    }
    
    return 0;
}

void b_rand(void){
    
    int result = 0;
    
    result = (rand() % 2 );
    
    printf("%d ", result);
    
    return;
}
//*/
