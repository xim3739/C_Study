/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define ARRAY_SIZE 10

int main() {
    
    int randomArray [ARRAY_SIZE] = {0, };
    int max = 0;
    int min = 0;
    int i = 0;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < SIZE; i++) {
        randomArray[rand()%10]++;
    }
    
    max = randomArray[0];
    min = randomArray[0];
    
    for(i = 0; i < 10; i++) {
        if(max < randomArray[i]){
            max = randomArray[i];
        }
        if(min > randomArray[i]) {
            min = randomArray[i];
        }
    }
    
    for(i = 0; i < 10; i++) {
        printf("%d = %d 번 \n",i, randomArray[i]);
    }
    
    for(i = 0; i < 10; i++) {
        if(randomArray[i] == max) {
            printf("가장 많이 생성된 수 %d \n",i);
        }
    }
    
    for(i = 0; i < 10; i++) {
        if(randomArray[i] == min) {
            printf("가장 적게 생성된 수 %d \n",i);
        }
    }
    
    return 0;
}


//*/
