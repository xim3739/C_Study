/*/
#include <stdio.h>

int main() {
    
    int num = 0;
    int a = 0, b = 0 ,c = 0;
    
    printf("3자리 십진수를 입력하세요 : ");
    rewind(stdin);
    scanf("%d", &num);
    
    a = num % 10;
    b = (num/10) % 10;
    c = (num/100) % 10;

    
    switch (c%2) {
        case 1:
            printf("%d : 홀수 ", c);
            break;
        default:
            printf("%d : 짝수 ", c);
            break;
    }
    
    switch (b%2) {
        case 1:
            printf("%d : 홀수 ", b);
            break;
        default:
            printf("%d : 짝수 ", b);
            break;
    }
    switch (a%2) {
        case 1:
            printf("%d : 홀수 \n", a);
            break;
        default:
            printf("%d : 짝수 \n", a);
            break;
    }
    
    
    
    return 0;
}
//*/
