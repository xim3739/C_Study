/*/
#include <stdio.h>
#include <stdlib.h>

int input_number(void);
void multy_result_store_array(int num);

int main() {
    
    int num = 0;

    while(1){
        num = input_number();
    
        multy_result_store_array(num);
        
        if(num == 20) {
            exit(1);
        }
    }
    return 0;
}

int input_number(void){
    int num = 0;
    while(1){
        
        printf("input number : ");
        scanf("%d", &num);
        
        if(num < 0 || num > 20) {
            printf("wrong input number... try again \n");
        }else
            break;
    }
    return num;
}

void multy_result_store_array(int num){
    
    int i = 0;
    int multyResult = 0;
    int array1[9] = { };
    
    for(i = 1; i <= 9; i++){
        
        multyResult = num * i;
        array1[i-1] = multyResult;
        
    }
    
    printf("%d %d %d %d %d %d %d %d %d\n", array1[0], array1[1], array1[2], array1[3], array1[4], array1[5], array1[6], array1[7], array1[8]);
    
    return;
}

//*/
