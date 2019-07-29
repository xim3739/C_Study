/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(void);

int main() {
    
    int randomValue = 0;
    int i = 0;
    
    for(i = 0; i < 30; i ++) {
        
        randomValue = get_random();
        
        printf("%d ", randomValue);
        
    }
    
    
    return 0;
}

int get_random(void) {
    
    static int inited = 0;
    int randomValue = 0;
    
    if(inited == 0){
        
        srand((unsigned)time(NULL));
        
        randomValue = rand() % 5 + 1;
        
        inited = 1;
    } else {
        
        randomValue = rand() % 5 + 1;
    }
    
    return randomValue;
}
//*/
