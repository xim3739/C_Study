/*/
#include <stdio.h>

void information(void);
int input_num(void);
int square_result(int num);
int cube_result(int num);
int quartic_result(int num);
int quintic_result(int num);
void result_print(int num, int square, int cube, int quartic, int quintic);

int main() {
    
    int num = 0;
    int square = 0;
    int cube = 0;
    int quartic = 0;
    int quintic = 0;
    int i = 0;

    num = input_num();
    information();
    for(i = 1; i <= num + 2; i++){
        square = square_result(i);
        cube = cube_result(i);
        quartic = quartic_result(i);
        quintic = quintic_result(i);
        result_print(i, square, cube, quartic, quintic);
        --num;
    }
    
    
    
    return 0;
}
void information(void) {
    
    printf("A TABLE OF POWERS \n");
    printf("==========================================================\n");
    printf("INTEGER     SQUARE     CUBE     QUARTIC     QUINTIC\n");
    printf("==========================================================\n");
    
    return;
    
}

void result_print(int num, int square, int cube, int quartic, int quintic){
    
    if(num == 1){
        printf("    %d            %d         %d          %d           %d \n", num, square, cube, quartic, quintic);
    }else if(num == 2){
        printf("    %d            %d         %d         %d          %d \n", num, square, cube, quartic, quintic);
    }else if(num == 3){
        printf("    %d            %d        %d         %d         %d \n", num, square, cube, quartic, quintic);
    }
    return;
    
}

int input_num(void){
    
    int num = 0;
    
    while(1){
        
        printf("정수를 입력하세요 : ");
        scanf("%d", &num);
        if(num < 1 || num > 30){
            printf("다시 입력하세요. \n");
        }else{
            break;
        }
    }
    
    return num;
}

int square_result(int num){
    int result = 1;
    int i = 0;
    
    for (i = 1; i <= 2; i++) {
        result = result * num;
    }
    
    return result;
}

int cube_result(int num){
    int result = 1;
    int i = 0;
    
    for (i = 1; i <= 3; i++) {
        result = result * num;
    }
    
    return result;
}

int quartic_result(int num){
    int result = 1;
    int i = 0;
    
    for (i = 1; i <= 4; i++) {
        result = result * num;
    }
    
    return result;
}

int quintic_result(int num){
    int result = 1;
    int i = 0;
    
    for (i = 1; i <= 5; i++) {
        result = result * num;
    }
    
    return result;
}

//*/
