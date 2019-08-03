//*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define STATE_READY 0
#define STATE_USING 1
#define STATE_ADMIN 2


#define INPUT_INVALID -1
#define INPUT_RETURN -2
#define INPUT_ADMIN -3
#define INPUT_COIN -4
#define INPUT_BUY -5
#define INPUT_DISPLAY -6

#define ADMIN_CODE "xim"
#define RETURN_CODE "return"
#define DISPLAY_CODE "display"
#define BUY_CODE "get"

#define CONTAINER_COUNT 10

typedef struct Item {
    char name[32];
    int count;
    int price;
} Item;

// global value
int currentCoin = 0;
int currentState = STATE_READY;

Item currentItems[CONTAINER_COUNT];

// utility funs
bool isDigit(char *str);
int evaluateCommand(char *command);
bool strEqual(char *str1, char *srt2);
bool strStart(char *str1, char *str2);
void displayItems(void);
void printReady(void);


// return next state
int handleReady(char *command);
int handleUsing(char *command);
int handleAdminist(char *command);
void handleBuyItem(char *command);

int main() {
    Item a = {.name = "a", .count = 10, .price = 200};
    Item b = {.name = "b", .count = 10, .price = 300};
    Item c = {.name = "c", .count = 10, .price = 500};
    currentItems[0] = a;
    currentItems[1] = b;
    currentItems[2] = c;
    
    printReady();
    char command[64];
    
    while(true) {
        printf("\ninput command : ");
        
        scanf("%s", command);
        
        if (evaluateCommand(command) == INPUT_DISPLAY) {
            displayItems();
            continue;
        }
        
        switch (currentState) {
            case STATE_READY:
                currentState = handleReady(command);
                break;
            case STATE_USING:
                currentState = handleUsing(command);
                break;
            case STATE_ADMIN:
                currentState = handleAdminist(command);
                break;
            default:
                printf("error unknown state!!");
                break;
        }
    }
    return 0;
}

int handleReady(char *command) {
    switch (evaluateCommand(command)) {
        case INPUT_COIN: {
            int insertCoin = atoi(command);
            printf("\ninsert coin %d", insertCoin);
            currentCoin += insertCoin;
            printf("\ncurrent coin %d", currentCoin);
            return STATE_USING;
        }
        case INPUT_ADMIN:
            // TODO
            return STATE_ADMIN;
        default:
            printf("\ninput is invalid!! try again : ");
    }
    return currentState;
}

int handleUsing(char *command) {
    switch (evaluateCommand(command)) {
        case INPUT_COIN: {
            int insertCoin = atoi(command);
            printf("\ninsert coin %d", insertCoin);
            currentCoin += insertCoin;
            printf("\ncurrent coin %d", currentCoin);
            return STATE_USING;
        }
        case INPUT_RETURN:
            printf("\ncoin is returned!! %d", currentCoin);
            currentCoin = 0;
            return STATE_READY;
        case INPUT_BUY: {
            handleBuyItem(command);
            if (currentCoin == 0) {
                printReady();
                return STATE_READY;
            }
            return STATE_USING;
        }
        default:
            printf("\ninput is invalid!! try again : ");
    }
    return currentState;
}

void handleBuyItem(char *command) {
    int index = atoi((command + strlen(BUY_CODE)));
    if (index >= 0 && index < CONTAINER_COUNT) {
        Item *item = (currentItems + index);
        if ((*item).count == 0) {
            printf("\n%s is empty", (*item).name);
        } else if (currentCoin >= (*item).price){
            printf("\nyou get the %s", (*item).name);
            currentCoin -= (*item).price;
            (*item).count -= 1;
        } else {
            printf("\nneed more coin %d", (*item).price - currentCoin);
        }
    } else {
        printf("\ninvalid item index");
    }
}

int handleAdminist(char *command) {
    return currentState;
}

///////////

void printReady() {
    printf("\nReady vending machine!\n");
}

void displayItems() {
    printf("index\tname\tcount\tprice\n");
    for (int i=0; i<CONTAINER_COUNT; i++) {
        Item item = currentItems[i];
        printf("%d\t%s\t%d\t%d\n", i, item.name, item.count, item.price);
    }
}

bool strEqual(char *str1, char *srt2) {
    return (strcmp(str1, srt2) == false);
}

bool strStart(char *str1, char *str2) {
    while (*str2 != '\0') {
        if (*str1 != *str2) {
            return false;
        }
        str1++;
        str2++;
    }
    return true;
}

int evaluateCommand(char *command) {
    if (isDigit(command)) {
        return INPUT_COIN;
    } else if (strEqual(command, ADMIN_CODE)) {
        return INPUT_ADMIN;
    } else if (strEqual(command, RETURN_CODE)) {
        return INPUT_RETURN;
    } else if (strStart(command, BUY_CODE)){
        return INPUT_BUY;
    } else if (strEqual(command, DISPLAY_CODE)) {
        return INPUT_DISPLAY;
    }
    return INPUT_INVALID;
}


bool isDigit(char *str) {
    return (atoi(str) != 0) || strcmp(str, "0") == false;
}
//*/
