/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face(void);

int main() {

    get_dice_face();
    
    return 0;
    
}

void get_dice_face(void){
    
    static int valueOne = 0;
    static int valueTwo = 0;
    static int valueThree = 0;
    static int valueFour = 0;
    static int valueFive = 0;
    static int valueSix = 0;
    
    int diceValue = 0;
    int i = 0;
    
    diceValue = rand()%6+1;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < 100; i++){
        
        diceValue = rand()%6+1;
        
        switch (diceValue) {
            case 1:
                valueOne++;
                break;
            case 2:
                valueTwo++;
                break;
            case 3:
                valueThree++;
                break;
            case 4:
                valueFour++;
                break;
            case 5:
                valueFive++;
                break;
            case 6:
                valueSix++;
                break;
        }
    }
    
    printf("%d %d %d %d %d %d \n", valueOne, valueTwo, valueThree, valueFour, valueFive, valueSix);
    
    return;
}
//*/
