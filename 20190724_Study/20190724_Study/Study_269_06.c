/*/
#include <stdio.h>
#include <stdlib.h>

int num1 = 0;
int num2 = 0;

void input_value(void);
int add_value(int num1, int num2);
int add_count(void);

int main() {
    
    int sum = 0;
    int count = 0;
    
    for( ; ; ){
    
        input_value();
        sum = add_value(num1, num2);
        if(num1 == 0 && num2 == 0) break;
        printf("덧셈 결과 : %d \n",sum);
        count = add_count();
    }
    
    return 0;
}

void input_value(void){
    
    while(1){
        printf("두 정수를 입력하세요 (0 0 -> exit) : ");
        scanf("%d %d", &num1, &num2);
        if(num1 == 0 && num2 ==0) {
            exit(1);
        }
        if((num1 < 0 || num1 > 100) || (num2 < 0 || num2 > 100)){
            printf("다시 입력하세요.\n");
            continue;
        }else{
            break;
        }
        
        
    }
}

int add_value(int num1, int num2){
    
    return num1 + num2;
}

int add_count(){
    static int addCount = 0;
    addCount++;
    return addCount;
}
//*/
