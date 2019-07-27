/*/
#include <stdio.h>

char input_alpha(void);
void my_alpha(char letter);

int main() {
    
    char letter = 0;
    
    
    letter = input_alpha();
    
    my_alpha(letter);
    
    return 0;
}

char input_alpha(void){
    
    char letter = 0;
    
    while(1){
        
        printf("대문자, 소문자 중 하나 입력 요망 : ");
        rewind(stdin);
        scanf("%c",&letter);
        if((letter >= 'A' && letter <= 'Z') ||(letter >= 'a' && letter <= 'z')){
            break;
        }else{
            printf("다시 입력하세요. \n");
        }
    }
    return letter;
}

void my_alpha(char letter){
    
    int order = 0;
    
    if(letter >= 'A' && letter <= 90){
        order = letter - 'A' + 1;
    }else{
        order = letter - 'a' + 1;
    }
    
    printf("%c 의 알파벳 순서는 %d 입니다. \n", letter,order);
    
}
//*/
