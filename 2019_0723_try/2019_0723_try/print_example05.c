/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main() {
    
    int randomArray [SIZE] = { };
    int max = 0;
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < SIZE; i++) {
        randomArray[rand()%10]++;
    }
    
    for(i = 0; i < 10; i++) {
        if(max<randomArray[i]){
            max = randomArray[i];
        }
    }
    
    for(i = 0; i < 10; i++) {
        printf("%d = %d 번 \n",i,randomArray[i]);
    }
    
    for(i = 0; i < 10; i++) {
        if(randomArray[i] == max) {
            printf("가장 많이 생성된 수 %d \n",i);
        }
    }
    
    return 0;
}


//*/
