/*/
#include <stdio.h>

int main() {
    
    int i = 0, j = 0;
    
    for(i = 2; i <= 100; i++){
        
        for(j = 2; j < i; j++) {
            
            if((i % j) == 0)
                break;
            
        }
        
        if(i == j) {
            
            printf("%d ", i);
            
        }
        
    }
    
    int num = 0, count = 0, value = 0, i = 0;
    
    for(num = 2; num <= 100; num++){
        
        for(i = 1; i <= num; i++){
            
            value = num % i;
            
            if(value == 0)
                count++;
            
        }
        
        if(count == 2){
            printf("%d ", num);
        }
        
        count = 0;

    }
    
    return 0;
    
}
 /*/
