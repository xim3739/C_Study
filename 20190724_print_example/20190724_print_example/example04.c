/*/
#include <stdio.h>

int input_income(void);
void get_text(int income);

int main() {
    
    int income = 0;
    
    income = input_income();
    get_text(income);
    
    return 0;
}

int input_income(void){
    
    int income = 0;
    
    while(1){
        
        printf("input income : ");
        scanf("%d", &income);
        if(income < 1) {
            printf("wrong input income ... try again. \n");
        }else {
            break;
        }
    }
    
    return income;
}

void get_text(int income){
    
    int result = 0;
    
    if(income > 1000){
        result = income * 0.1;
        printf("text is %d \n", result);
    }else{
        result = income * 0.08;
        printf("text is %d \n", result);
    }
    
}
//*/
