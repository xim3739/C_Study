/*/
#include <stdio.h>

int main() {
    
    int i = 0;
    int star = 0;
    
    for(i = 0; i < 7; i++) {
        
        for(star = 0; star < 6 - i; star++){
            
            printf(" ");
            
        }
        
        for(star = 0; star <= i; star++){
            
            printf("*");
            
        }
        
        printf("\n");
        
    }
    
    return 0;
}
//*/
