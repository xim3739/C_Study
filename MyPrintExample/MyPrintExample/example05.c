/*/
#include <stdio.h>
#include <stdlib.h>

int my_draw(int amount);
int my_save(int amount);
int menu(void);

int money = 0;
int amount = 0;

int main() {
    
    int menuValue = 0;
    int saveMoney = 0;
    int drawMoney = 0;
    
    while(1) {
        menuValue = menu();
        switch (menuValue) {
            case 1:
                saveMoney = my_save(amount);
                money = money + saveMoney;
                printf("present your money is %d \n", money);
                break;
            case 2:
                drawMoney = my_draw(amount);
                money = money - drawMoney;
                printf("present your money is %d \n", money);
                break;
            case 3:
                printf("present your money is %d ... exit program. Thank you. \n", money);
                exit(1);
        }
    }
    
    return 0;
}

int menu(void) {
    
    int value = 0;
    
    while(1) {
        printf("select menu : save(1), draw(2), exit(3)");
        scanf("%d", &value);
        if(value < 1 || value > 3) {
            printf("wrong select menu ... try again plz. \n");
        }else {
            break;
        }
    }
    
    return value;
}

int my_save(int amount) {
    
    while(1) {
        printf("input save money : ");
        scanf("%d", &amount);
        if(amount < 0) {
            printf("wrong input money ... try again. \n");
        }else {
            break;
        }
    }
    
    return amount;
}

int my_draw(int amount) {
   
    while(1) {
        printf("input draw money : ");
        scanf("%d", &amount);
        if(amount < 0) {
            printf("wrong input money ... try again. \n");
        }else {
            break;
        }
    }
    
    return amount;
}

//*/
