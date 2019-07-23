/*/
#include <stdio.h>

char input_alpha(void);
int my_alpha(char alpha);
void result_print(char alpha,int result);

int main() {
    
    char alpha = 0;
    int result = 0;
    
    alpha = input_alpha();
    
    result = my_alpha(alpha);
    
    result_print(alpha,result);
    
    return 0;
}

char input_alpha(void){
    
    char alpha = 0;
    
    while(1){
        
        printf("알파벳을 입력하세요. : ");
        rewind(stdin);
        scanf("%c",&alpha);
        if((alpha >= 65 && alpha <=90) || (alpha >= 97 && alpha <= 122)){
            break;
        }else{
            printf("다시 입력하세요. \n");
        }
    }
    
    return alpha;
}

int my_alpha(char alpha){
    
    int result = 0;
    
    if(alpha >= 65 && alpha <=90){
        result = alpha - 64;
    }else if(alpha >= 97 && alpha <= 122){
        result = alpha - 96;
    }
    
    return result;
}

void result_print(char alpha,int result){
    
    printf("입력한 %c 는 알파벳 순서로 %d 번째 입니다. \n", alpha,result);
    
}
//*/
