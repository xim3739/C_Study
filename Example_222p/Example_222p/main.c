/*/
#include <stdio.h>

int main() {
    
    char chDay = 0;
    
    printf("문자 입력 : ");
    rewind(stdin);
    scanf("%c", &chDay);
    
    switch (chDay) {
        case 't': case 'T':
            printf("Tursday \n");
            break;
        case 's': case 'S':
            printf("Saturday \n");
            break;
        case 'f': case 'F':
            printf("Friday \n");
            break;
        default:
            printf("wrong input values \n");
            break;
    }
    return 0;
}
//*/
