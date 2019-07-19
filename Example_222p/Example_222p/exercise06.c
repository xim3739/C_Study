/*/
#include <stdio.h>

int main() {
    
    int inputMon = 0;
    
    while(1){
        printf("input Month : ");
        rewind(stdin);
        scanf("%d", &inputMon);
        if(inputMon < 1 || inputMon > 12){
            printf("wrong input Month... try again plz! \n");
        }
        else
            break;
    }
    switch (inputMon) {
        case 12:
            printf("DEC \n");
            break;
        case 11:
            printf("NOV \n");
            break;
        case 10:
            printf("OCT \n");
            break;
        case 9:
            printf("SEP \n");
            break;
        case 8:
            printf("AUG \n");
            break;
        case 7:
            printf("JUL \n");
            break;
        case 6:
            printf("JUN \n");
            break;
        case 5:
            printf("MAY \n");
            break;
        case 4:
            printf("APL \n");
            break;
        case 3:
            printf("MAR \n");
            break;
        case 2:
            printf("FEB \n");
            break;
        case 1:
            printf("JEN \n");
            break;
    }
    
    return 0;
}
//*/
