/*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
 
//macro
#define CONTINE_FLAG -1
#define RETURN_FLAG 1
#define CARD_COMMAND 2
#define MONEY_COMMAND 3
#define ERROR_COMMAND 4
#define BUY_COMMAND 5
#define ADMINIST_COMMAND 6
#define ADD_SYSTEM 7
#define REMOVE_SYSTEM 8
#define VENDING_MONEY_SYSTEM 9
#define EXIT_ADMINIST 10

//fanction
int pay_way(void);
void input_money_system(int* money, int* goodsNum, int* goodsCount, int* flag);
void buy_card(int* goodsNum, int* goodsCount, int* flag);
int administ_system(void);
void add_goods(int* goodsNum, int* goodsPrice);
void remove_goods(int* goodsNum);
void vanding_money_system(void);

void menu_interface(void);
void vanding_machine(void);

//static values
int contaner = 5;
int goodsStore[5] = {0, 20, 20, 10, 20};
char *goodsName[5] = {" ","coke","soda","jucie","coffee"};
int price[5] = {0, 700, 900, 1200, 500};
int vendingMachineMoney = 100000;
int totalMoney = 0;

int main() {
    
    int money = 0;
    int goodsNum = 0;
    int goodsCount = 0;
    int goodsPrice = 0;
    int flag = 0;
    
    while(1) {
        
        while(1){
            menu_interface();
            printf("자판기 남은 금액 : %d \n", vendingMachineMoney);
            if(vendingMachineMoney == 0) {
                printf("자판기의 잔고가 부족합니다. 죄송합니다. \n");
                continue;
            }else {
                break;
            }
        }
        
        switch (pay_way()) {
                
            case MONEY_COMMAND:
                input_money_system(&money, &goodsNum, &goodsCount, &flag);
                break;
                
            case CARD_COMMAND:
                printf("카드를 확인하였습니다. \n");
                buy_card(&goodsNum, &goodsCount, &flag);
                break;
                
            case ERROR_COMMAND:
                printf("다시 입력해주세요. \n");
                continue;
                
            case ADMINIST_COMMAND:
                
                while(1){
                    
                    switch (administ_system()) {
                        case ADD_SYSTEM:
                            add_goods(&goodsNum, &goodsPrice);
                            continue;
                        case REMOVE_SYSTEM:
                            remove_goods(&goodsNum);
                            continue;
                        case VENDING_MONEY_SYSTEM:
                            vanding_money_system();
                            continue;
                        case EXIT_ADMINIST:
                            printf("$$$ 관리자 모드를 종료합니다. $$$ \n");
                            break;
                        case ERROR_COMMAND:
                            printf("확인 후 다시 입력 해주세요.\n");
                            continue;
                    }
                    
                    break;
                }
        }
        
        if(flag == CONTINE_FLAG){
            
            printf("%d번 %s %d개를 드립니다. 잔돈 %d원을, 또는 카드를 반환합니다. \n",goodsNum, goodsName[goodsNum], goodsCount, totalMoney);
            
            totalMoney = totalMoney - totalMoney;
        }
        flag = RETURN_FLAG;
    }
    
    return 0;
    
}

void menu_interface(void) {
    
    int i = 0;
    
    printf("\n=============== 자판기 =================\n");
    for(i = 1; i < contaner; i++) {
        printf("%d %10s %10d %10d\n", i, goodsName[i], price[i], goodsStore[i]);
    }
    
    return;
}

int pay_way(void) {
    
    char paySelect = 0;
    
    printf("결제 수단을 선택하세요. (카드 = c ... 현금 = m) : ");
    rewind(stdin);
    scanf("%c", &paySelect);
    
    if(paySelect == 'C' || paySelect == 'c') {
        return CARD_COMMAND;
    } else if(paySelect == 'M' || paySelect == 'm') {
        return MONEY_COMMAND;
    } else if(paySelect == 'x' || paySelect == 'x') {
        return ADMINIST_COMMAND;
    } else {
        return ERROR_COMMAND;
    }
    
}

int administ_system(void) {
    
    char selectSystem = 0;
    
    printf("\n$$$ 관리자 모드 입니다. $$$\n");
    printf("시스템을 입력하세요. (추가 = a , 삭제 = r , 자판기 금액관리 = v, 종료 = e): ");
    rewind(stdin);
    scanf("%c", &selectSystem);
    
    if(selectSystem == 'a' || selectSystem == 'A') {
        return ADD_SYSTEM;
    } else if(selectSystem == 'r' || selectSystem == 'R') {
        return REMOVE_SYSTEM;
    } else if(selectSystem == 'v' || selectSystem == 'V') {
        return VENDING_MONEY_SYSTEM;
    } else if(selectSystem == 'e' || selectSystem == 'E') {
        return EXIT_ADMINIST;
    } else {
        return ERROR_COMMAND;
    }
}

void add_goods(int* goodsNum, int* goodsPrice) {
    
    char name[16];
    int store = 0;
    
    printf("\n재고 추가 시스템 \n");
    
    while(1){
        printf("추가하거나 변경 할 재고의 번호를 입력하세요. (1 ~ 4)");
        scanf("%d",goodsNum);
        if(*goodsNum >= 1 && *goodsNum <= 4) {
            break;
        } else {
            printf("확인 후 다시 입력해주세요. \n");
            continue;
        }
    }
    
    while(1) {
        printf("추가하거나 변경할 재고의 개수를 입력하세요. (1 ~ 20): ");
        scanf("%d", &store);
        if(store >= 1 && store <= 20){
            printf("%d개 에서 ", goodsStore[*goodsNum]);
            goodsStore[*goodsNum] = store;
            printf("%d개로 변경 되었습니다. \n", goodsStore[*goodsNum]);
            break;
        } else {
            printf("확인 후 다시 입력 해주세요.\n");
        }
    }
    
    while(1) {
        printf("추가하거나 변경 할 재고의 가격을 입력하세요. (500 ~ 2000): ");
        scanf("%d", goodsPrice);
        if(*goodsPrice >= 500 || *goodsPrice <= 2000) {
            price[*goodsNum] = *goodsPrice;
            sleep(1);
            printf("%d번 %s물품을 %d 가격으로 추가, 변경 하였습니다. \n", *goodsNum,goodsName[*goodsNum],price[*goodsNum]);
            break;
        } else {
            printf("확인 후 다시 입력 하세요. \n");
            continue;
        }
    }
}

void remove_goods(int* goodsNum) {
    
    printf("\n재고 삭제 시스템 \n");
    
    while(1) {
        printf("제거 할 재고의 번호를 입력하세요. (1 ~ 4) :");
        scanf("%d",goodsNum);
        if(*goodsNum < 1 || *goodsNum > 4) {
            printf("확인 후 다시 입력 해주세요. \n");
        } else {
            printf("%d번 %s물품을 제거합니다. \n", *goodsNum, goodsName[*goodsNum]);
            goodsStore[*goodsNum] = 0;
            price[*goodsNum] = 0;
            sleep(1);
            printf("%d번 물품 : %s 재고 : %d 가격 : %d \n", *goodsNum, goodsName[*goodsNum], goodsStore[*goodsNum],price[*goodsNum]);
            break;
        }
    }
}

void vanding_money_system(void) {
    int input_money = 0;
    
    printf("\n자판기 재고 1시스템 \n");
    
    while(1) {
        printf("자판기의 현재 금액 입니다. %d \n", vendingMachineMoney);
        printf("자판기의 금액을 조정 하세요. : ");
        scanf("%d", &input_money);
        if(vendingMachineMoney + input_money <= 50000) {
            printf("자판기의 금액이 너무 적습니다. 다시 입력하세요. \n");
            continue;
        } else {
            vendingMachineMoney = vendingMachineMoney + input_money;
            printf("자판기의 잔액이 %d원 으로 조정되었습니다. \n", vendingMachineMoney);
            break;
        }
    }
    
}

void buy_card(int* goodsNum, int* goodsCount, int* flag) {
    
    char selectChar = 0;
back:
    while(1){
        printf("원하시는 물건의 번호를 입력하세요. (1 ~ 4, 반환 0) : ");
        scanf("%d", goodsNum);
        if(*goodsNum == 0) {
            printf("카드를 반환하고 종료합니다. \n");
            goto cardNon;
            break;
        }else if(goodsStore[*goodsNum] > 0) {
            printf("%d번 %s를 선택하였습니다. \n", *goodsNum, goodsName[*goodsNum]);
            break;
        }else if(*goodsNum >= 5) {
            printf("%d번의 물건은 없습니다. 확인 후 다시 입력하세요. \n", *goodsNum);
            continue;
        }else if(goodsStore[*goodsNum] <= 0) {
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
        }else if(*goodsCount == 0) {
            printf("카드를 반환합니다. \n");
            goto cardNon;
            break;
        }else if(goodsStore[*goodsNum] > *goodsCount) {
            printf("%d개를 선택하였습니다. \n",*goodsCount);
            printf("%d번 %s %d개를 드립니다.\n",*goodsNum, goodsName[*goodsNum], *goodsCount);
        selectBack:
            printf("계속 구매 하시겠습니까? (y , n) : ");
            rewind(stdin);
            scanf("%c", &selectChar);
            if(selectChar == 'y' || selectChar == 'Y') {
                goto back;
            } else if(selectChar == 'n' || selectChar == 'N') {
                break;
            } else {
                printf("확인 후 다시 입력해주세요. \n");
                goto selectBack;
            }
            
            break;
        }
    }
    
    *flag = CONTINE_FLAG;
    vendingMachineMoney = vendingMachineMoney + (price[*goodsNum] * *goodsCount);
    goodsStore[*goodsNum] = goodsStore[*goodsNum] - *goodsCount;
    
cardNon:
    
    return;
    
}

void input_money_system(int* money, int* goodsNum, int* goodsCount, int* flag){
    
    char selectChar = 0;
    
back:
    while(1){
        printf("금액을 입력하세요. (100, 500, 1000, 5000, 다음단계 = 1, 반환 후 종료 = 0) : ");
        scanf("%d", money);
        if(*money == 100 || *money == 500 || *money == 1000 || *money == 5000) {
            totalMoney = totalMoney + *money;
            printf("현재 금액은 %d원 입니다. \n", totalMoney);
            continue;
        }else if(*money == 0) {
            printf("현재 금액은 %d원 입니다. 반환합니다.\n", totalMoney);
            totalMoney = totalMoney - totalMoney;
            goto goodsNumNon;
            break;
        }else if(*money == 1) {
            printf("현재 금액은 %d원 입니다. \n", totalMoney);
            break;
        }else {
            printf("다시 입력해주세요. \n");
            continue;
        }
    }
    
    *flag = CONTINE_FLAG;
    
    if(*flag == CONTINE_FLAG){
        
        vendingMachineMoney += totalMoney;
        
        while(1){
            printf("원하시는 물건의 번호를 입력하세요. (1 ~ 4, 반환 0) : ");
            scanf("%d", goodsNum);
            if(*goodsNum == 0) {
                printf("%d원 을 반환하고 종료합니다. \n", totalMoney);
                vendingMachineMoney = vendingMachineMoney - totalMoney;
                totalMoney = totalMoney - totalMoney;
                goto goodsNumNon;
                break;
            }else if(price[*goodsNum] > totalMoney){
                printf("%d원 부족합니다. \n", price[*goodsNum] - totalMoney);
            }else if(goodsStore[*goodsNum] > 0) {
                printf("%d번 %s를 선택하였습니다. \n", *goodsNum, goodsName[*goodsNum]);
                break;
            }else if(*goodsNum >= 5) {
                printf("%d번의 물건은 없습니다. 확인 후 다시 입력하세요. \n", *goodsNum);
                continue;
            }else if(goodsStore[*goodsNum] <= 0) {
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
                printf("금액이 %d원 부족합니다. (현재 금액 : %d원)\n", (price[*goodsNum] * *goodsCount) - totalMoney, totalMoney);
                printf("금액을 더 넣으시겠습니까? (y,n)");
                rewind(stdin);
                scanf("%c", &selectChar);
                if(selectChar == 'y' || selectChar == 'Y') {
                    goto back;
                } else if(selectChar == 'n' || selectChar == 'N') {
                    continue;
                }
            }else if(*goodsCount == 0) {
                printf("%d원을 반환하고 종료합니다. \n",totalMoney);
                totalMoney = totalMoney - totalMoney;
                *flag = RETURN_FLAG;
                break;
            }else if(goodsStore[*goodsNum] > *goodsCount) {
                printf("%d개를 선택하였습니다. \n",*goodsCount);
                break;
            }
        }
    }
    
    
    goodsStore[*goodsNum] = goodsStore[*goodsNum] - *goodsCount;
    totalMoney = totalMoney - (price[*goodsNum] * *goodsCount);
    vendingMachineMoney = vendingMachineMoney - totalMoney;
    
goodsNumNon:
    
    return;
}

//*/
