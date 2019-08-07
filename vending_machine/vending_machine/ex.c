/*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STATE_READY 0
#define STATE_USING 1
#define STATE_ADMIN 2
#define STATE_CARD 3


#define INPUT_INVALID -1
#define INPUT_RETURN -2
#define INPUT_ADMIN -3
#define INPUT_COIN -4
#define INPUT_BUY -5
#define INPUT_DISPLAY -6
#define INPUT_ADMIN_EXIT -7
#define INPUT_ADD_ITEM -8
#define INPUT_REMOVE_ITEM -9
#define INPUT_CARD -10

#define ADMIN_COMMAND "xim"
#define RETURN_COMMAND "return"
#define DISPLAY_COMMAND "display"
#define BUY_COMMAND "get "
#define ADMIN_EXIT_COMMAND "exit"
#define ADD_ITME_COOMMAND "add "
#define REMOVE_ITEM_COMMAND "remove "
#define CARD_COMMAND "card "

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
char* trim(char* str);


// return next state
int handleReady(char *command);
int handleUsing(char *command);
int handleAdminist(char *command);
int handleCard(char *command);
void handleBuyItem(char *command);
void handleAddItem(char *command);
void handleRemoveItem(char *command);

int main() {
    
    printReady();
    char command[64];
    char* trimCommand = NULL;
    
    while(true) {
        printf("\ninput command : ");
        
        fgets(command,64,stdin);
        //scanf("%s", command);
        trimCommand = trim(command);
        
        if (evaluateCommand(trimCommand) == INPUT_DISPLAY) {
            displayItems();
            continue;
        }
        
        switch (currentState) {
            case STATE_READY:
                currentState = handleReady(trimCommand);
                break;
            case STATE_USING:
                currentState = handleUsing(trimCommand);
                break;
            case STATE_ADMIN:
                currentState = handleAdminist(trimCommand);
                break;
            case STATE_CARD:
                currentState = handleCard(trimCommand);
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
            printf("\nhellow adin!!");
            return STATE_ADMIN;
        default:
            printf("\ninput is invalid!! try again : ");
    }
    return currentState;
}

int handleCard(char *command) {
    switch (evaluateCommand(command)) {
        case INPUT_RETURN:
            printf("\nreturn card !!");
            return STATE_USING;
        case INPUT_CARD_BUY:
            
    }
    
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
    int index = atoi((command + strlen(BUY_COMMAND)));
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
    switch (evaluateCommand(command)) {
        case INPUT_ADMIN_EXIT:
            printf("\nreturn to Ready.");
            printReady();
            return STATE_READY;
        case INPUT_ADD_ITEM:{
            handleAddItem(command);
            return STATE_ADMIN;
        }
        case INPUT_REMOVE_ITEM:{
            handleRemoveItem(command);
            return STATE_ADMIN;
        }
        default:
            printf("\n wrong input system.");
            break;
    }
    return currentState;
}

void handleRemoveItem(char *command) {
    char* strIndex = (command + strlen(REMOVE_ITEM_COMMAND));
    int removeIndex = atoi(strIndex);
    if(removeIndex >= 0 && removeIndex < CONTAINER_COUNT) {
        currentItems[removeIndex].count = 0;
        currentItems[removeIndex].price = 0;
        *(currentItems[removeIndex].name) = (char)NULL;
        printf("\nSuccess.");
        
    }else {
        printf("\nerror");
    }
    
}

void handleAddItem(char *command) {
    // add index, name, count, price
    
    char* strIndex = strtok(command + strlen(ADD_ITME_COOMMAND), ",");
    char* name = strtok(NULL, ",");
    char* strCount = strtok(NULL, ",");
    char* strPrice = strtok(NULL, ",");
    
    if(strtok(NULL, ",") != NULL) {
        printf("\nerror");
        return;
    }
    
    if(strIndex == NULL || name == NULL || strCount == NULL || strPrice == NULL) {
        printf("\nerror");
        return;
    }

    if(isDigit(strIndex) == false || isDigit(strCount) == false || isDigit(strPrice) == false) {
        printf("\nerror");
        return;
    }
    
    int index = atoi(trim(strIndex));
    if ((index >= 0 && index < CONTAINER_COUNT) == false) {
        printf("\nerror");
        return;
    }
    
    int count = atoi(trim(strCount));
    if(count <= 0) {
        printf("\nerror");
        return;
    }
    int price = atoi(trim(strPrice));
    if(price <= 0) {
        printf("\nerror");
        return;
    }
    
    strcpy(currentItems[index].name, name);
    currentItems[index].count = count;
    currentItems[index].price = price;
    printf("\nSuccess");
    
    
    return;
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
    } else if (strEqual(command, ADMIN_COMMAND)) {
        return INPUT_ADMIN;
    } else if (strEqual(command, RETURN_COMMAND)) {
        return INPUT_RETURN;
    } else if (strStart(command, BUY_COMMAND)){
        return INPUT_BUY;
    } else if (strEqual(command, DISPLAY_COMMAND)) {
        return INPUT_DISPLAY;
    } else if (strEqual(command, ADMIN_EXIT_COMMAND)) {
        return INPUT_ADMIN_EXIT;
    } else if (strStart(command, ADD_ITME_COOMMAND)) {
        return INPUT_ADD_ITEM;
    } else if (strStart(command, REMOVE_ITEM_COMMAND)) {
        return INPUT_REMOVE_ITEM;
    } else if (strStart(command, CARD_COMMAND)) {
        return INPUT_CARD;
    }
    return INPUT_INVALID;
}


bool isDigit(char *str) {
    return (atoi(str) != 0) || strcmp(str, "0") == false;
}

char* trim(char* str) {
    long l = strlen(str);
    
    while(isspace(str[l - 1])) --l;
    while(*str && isspace(*str)){
        ++str;
        --l;
    }
    
    return strndup(str,l);
}
//*/
