/*/
#include <stdio.h>

int main() {
    
    char inputCh = 0;
    
    printf("알파벳을 입력하세요 : ");
    rewind(stdin);
    scanf("%c", &inputCh);
    
    switch (inputCh) {
        case 'a': case 'A':
            printf("모음입니다. \n");
            break;
        case 'e': case 'E':
            printf("모음입니다. \n");
            break;
        case 'i': case 'I':
            printf("모음입니다. \n");
            break;
        case 'o': case 'O':
            printf("모음입니다. \n");
            break;
        case 'u': case 'U':
            printf("모음입니다. \n");
            break;
            
        default:
            printf("자음입니다. \n");
            break;
    }
    
    
    return 0;
}
//*/
