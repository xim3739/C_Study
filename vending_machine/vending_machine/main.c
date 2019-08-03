//*/
#include <stdio.h>
#include <stdlib.h>

void menu_interface(void);
void input_system(int* money, int* goodsNum, int* goodsCount, int* flag);
void get_value(void);

int goodsStore[5] = {0, 20, 20, 0, 20};
char *goodsName[5] = {" ","콜라","사이다","주스","커피"};
int price[5] = {0, 700, 900, 1000, 500};
int vendingMachineMoney = 100000;
int totalMoney = 0;

int main() {

    
    menu_interface();
    get_value();
    printf("자판기 금액 : %d \n", vendingMachineMoney);
    printf("현재 금액 : %d \n", totalMoney);
        
    return 0;
}

void menu_interface(void) {
    
    printf("===== 자판기 =====\n");
    printf("%8s %10s %8s %8s \n",goodsName[1], goodsName[2], goodsName[3], goodsName[4]);
    printf("%5d %5d %5d %5d \n", price[1], price[2], price[3], price[4]);
    printf("%5d %5d %5d %5d \n", goodsStore[1], goodsStore[2], goodsStore[3], goodsStore[4]);
    
    return;
}

void input_system(int* money, int* goodsNum, int* goodsCount, int* flag){
    
    *flag = 0;
    
    while(1){
        printf("금액을 입력하세요. (100, 500, 1000, 5000, 다음단계 = 1, 반환 후 종료 = 0) : ");
        scanf("%d", money);
        if(*money == 100 || *money == 500 || *money == 1000 || *money == 5000) {
            totalMoney = totalMoney + *money;
            printf("현재 금액은 %d원 입니다. \n", totalMoney);
            continue;
        }else if(*money == 0){
            printf("현재 금액은 %d원 입니다. 반환합니다.\n", totalMoney);
            totalMoney = totalMoney - totalMoney;
            *flag = 1;
            break;
        }else if(*money == 1){
            printf("현재 금액은 %d원 입니다. \n", totalMoney);
            printf("%d \n", *flag);
            break;
        }else {
            printf("다시 입력해주세요. \n");
            continue;
        }
    }
    
    if(*flag == 0){
        
        vendingMachineMoney += totalMoney;
        
        while(1){
            printf("원하시는 물건의 번호를 입력하세요. (1 ~ 4, 반환 0) : ");
            scanf("%d", goodsNum);
            if(goodsNum == 0) {
                printf("%d원 을 반환하고 종료합니다. \n", totalMoney);
                vendingMachineMoney = vendingMachineMoney - totalMoney;
                totalMoney = totalMoney - totalMoney;
                break;
            }else if(goodsStore[*goodsNum] > 0) {
                printf("%d번 %s를 선택하였습니다. \n", *goodsNum, goodsName[*goodsNum]);
                break;
            }else if(*goodsNum >= 5){
                printf("%d번의 물건은 없습니다. 확인 후 다시 입력하세요. \n", *goodsNum);
                continue;
            }else if(goodsStore[*goodsNum] <= 0){
                printf("%d번 %s의 물건이 품절 입니다. 다시 선택해주세요. \n", *goodsNum, goodsName[*goodsNum]);
                continue;
            }
        }
        
        while(1) {
            printf("개수를 입력하세요. (반환 0) : ");
            scanf("%d", goodsCount);
            if(goodsStore[*goodsNum] < *goodsCount) {
                printf("현재 %d번 %s의 물품이 부족합니다. (%d개)... 다시 입력해주세요. \n", *goodsNum, goodsName[*goodsNum], goodsStore[*goodsNum]);
                continue;
            }else if(totalMoney < (price[*goodsNum] * *goodsCount)) {
                printf("금액이 부족합니다. 다시 입력하세요. \n");
                continue;
            }else if(goodsStore[*goodsNum] > *goodsCount) {
                printf("%d개를 선택하였습니다. \n",*goodsCount);
                break;
            }
        }
    }
    
    return;
}

void get_value(void) {
    
    int money = 0;
    int goodsNum = 0;
    int goodsCount = 0;
    int flag = 0;
    
    while(1) {
        
        input_system(&money, &goodsNum, &goodsCount, &flag);
        
        goodsStore[goodsNum] = goodsStore[goodsNum] - goodsCount;
        totalMoney = totalMoney - (price[goodsNum] * goodsCount);
        vendingMachineMoney = vendingMachineMoney - totalMoney;
        
        if(flag == 0){
            
            printf("%d번 %s %d개를 드립니다. 잔돈 %d를 반환합니다. \n",goodsNum, goodsName[goodsNum], goodsCount, totalMoney);
        
            totalMoney = totalMoney - totalMoney;
        }
    }
    
    return;
}

//*/
