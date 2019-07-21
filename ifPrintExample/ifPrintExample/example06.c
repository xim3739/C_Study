/*/
#include <stdio.h>

int main() {
    
    int monthName = 0;
    
    printf("월 번호를 입력하세요 : ");
    scanf("%d", &monthName);
    
    switch (monthName) {
        case 1:
            printf("1월 \n");
            break;
        case 2:
            printf("2월 \n");
            break;
        case 3:
            printf("3월 \n");
            break;
        case 4:
            printf("4월 \n");
            break;
        case 5:
            printf("5월 \n");
            break;
        case 6:
            printf("6월 \n");
            break;
        case 7:
            printf("7월 \n");
            break;
        case 8:
            printf("8월 \n");
            break;
        case 9:
            printf("9월 \n");
            break;
        case 10:
            printf("10월 \n");
            break;
        case 11:
            printf("11월 \n");
            break;
        case 12:
            printf("12월 \n");
            break;
            
        default:
            printf("잘못입력하였습니다. \n");
            break;
    }
    
    return 0;
}
//*/
