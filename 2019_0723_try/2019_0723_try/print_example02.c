/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define ZERO 0

int random_value(void);

int main() {
    
    int randomArray [SIZE] = { };
    int radomValue = 0;
    int i = 0;
    int max = 0;
    int min = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < SIZE; i++) {
        radomValue = random_value();
        randomArray[i] = radomValue;
        
        printf("%d random number is %d \n", i+1, randomArray[i]);
    }
    
    if(randomArray[ZERO] > randomArray[1]) {
        max = randomArray[ZERO];
    } else if(randomArray[ZERO] == randomArray[1]) {
        max = randomArray[ZERO];
    } else {
        max = randomArray[1];
    }
    
    for(i = 2; i < SIZE; i++) {
        if(max > randomArray[i]){
            max = max;
        } else if (max == randomArray[i]){
            max = max;
        } else {
            max = randomArray[i];
        }
    }
    
    if(randomArray[ZERO] < randomArray[1]) {
        min = randomArray[ZERO];
    }else if(randomArray[ZERO] == randomArray[1]) {
        min = randomArray[ZERO];
    }else {
        min = randomArray[1];
    }
    
    for(i = 2; i < SIZE; i++) {
        if(min < randomArray[i]){
            min = min;
        } else if (min == randomArray[i]){
            min = min;
        } else {
            min = randomArray[i];
        }
    }
    
    printf("big num = %d \n", max);
    printf("small num = %d \n", min);
    
    return 0;
}

int random_value(void){
    
    
    int randomValue = 0;
    
    randomValue = rand() % 100 + 1;
    
    return randomValue;
}
//*/
