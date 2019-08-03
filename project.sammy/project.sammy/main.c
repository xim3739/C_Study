//*/
#include <stdio.h>

int print_menu(void);
void input_money(void);

//음료 재고 배열 선언 (음료 재고량 선언)
int store[5] = {0, 30, 30, 30, 30};
char *productName[5] = {" ", "콜라", "쌍화탕", "주스", "커피"};
int price[5] = {0, 1000, 1000, 1000, 1000};
int totalMoney = 0;

int main() {
    
    int menuNum = 0;    //메뉴 1~4 선택
    char continueSelet = 0;
    //음료 자판기 진행 프로그램 무한루프
    while(1){
        
        //3.돈 입력
        input_money();
        printf("현재 총 금액 %d \n", totalMoney);
        
        //메뉴 출력 및 입력
        menuNum = print_menu();
        if(menuNum == 5) {
            if(totalMoney > 0) {
                
                printf("%d 돈을 반환 하고 종료합니다. \n", totalMoney);
                totalMoney = 0;
            }
            
            break;
        }
        //4. 선택한 메뉴를 출력한다.(가격이 맞는지 확인,개수를 차감한다.)
        while(1){
            
            if(totalMoney < price[menuNum]) {
                
                printf("금액이 적습니다.\n");
                input_money();
            }else {
                
                printf("%s 를 드리옵니다.\n", productName[menuNum]);
                store[menuNum]--;
                totalMoney = totalMoney - price[menuNum];
                
                printf("남은 금액 : %d \n", totalMoney);
                printf("더 주문 하시겠습니까? (y,n)\n");
                rewind(stdin);
                scanf("%c", &continueSelet);
                if(continueSelet == 'y' || continueSelet == 'Y') {
                    
                    menuNum = print_menu();
                    continue;
                }else {
                    printf("남은 금액 %d를 반환합니다. \n", totalMoney);
                    totalMoney = 0;
                    break;
                }
            }
        }
        //5. 더 이상 주문을 안 할 경우
        printf("감사합니다. 안녕히 가세요. \n");
        break;
 
    }//음료 자판기 무한루프
    
    return 0;
}


int print_menu(void) {
    
    int num = 0;
    
    
    printf("1.콜라 %d개 // 2.쌍화탕 %d개 // 3.주스 %d개 // 4.커피 %d개 // 5.취소 버튼 \n", store[1], store[2], store[3], store[4]);
    
    while(1){
        
        printf("1 번부터 4 번까지만 번호를 선택하세요.");
        scanf("%d",&num);
        if(num < 1 || num > 5) {
            
            printf("다시입력. \n");
        }if(num == 5){
            
            break;
        }else {
            //재고량 확인
            if(store[num] <= 0) {
                
                printf("%s 는 품절 입니다. \n", productName[num]);
                continue;
            }
            
            break;
        }
    }
    
    return num;
}

void input_money(void){
    
    int money = 0;
    char returnChar = 0;
    int flage = 0;
    
    while(1) {
        
        printf("금액을 입력하세요 (100, 500, 1000, 5000, 10000) : ");
        scanf("%d", &money);
        
        switch (money) {
                
            case 100:
            case 500 :
            case 1000:
            case 5000:
            case 10000:
                totalMoney = totalMoney + money;
                printf("현재 총 금액은 %d 입니다. \n", totalMoney);
                break;
                
            default:
                printf("잘못된 금액 입니다. 총 금액에 반영 하지 않습니다.\n");
                break;
        }
        
        while(1){
            printf("금액을 다시 입력하시겠습니까? (y)es,(n)o ");
            rewind(stdin);
            scanf("%c", &returnChar);
            
            if(returnChar != 'Y' && returnChar != 'y' && returnChar != 'n' && returnChar != 'N') {
               
                printf("다시 입력하세요.");
            }else if(returnChar == 'y' || returnChar == 'Y'){
                
                break;
            }else if(returnChar == 'N' || returnChar == 'n') {
                
                flage = 1;
                break;
            }
        }
        
        if(flage == 1) {
            break;
        } else {
            continue;
        }
        
        break;
    }
    
    return;
}
//*/
