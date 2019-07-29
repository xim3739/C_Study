/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand(void);

int main(){
    
    double randValue = 0.0;
    
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 1; i <= 5; i++){
        
        randValue = f_rand();
        
        printf("%lf \n", randValue);
        
    }
    
    return 0;
}

double f_rand(void){
    
    double randValue = 0.0;
    
    randValue = (double) rand() / RAND_MAX;
    
    return randValue;
}
//*/
