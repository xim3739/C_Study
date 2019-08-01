/*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user_input(void);
void goods_store(int* store, int size);
void search_goods(int* store, int size, int num);

int main() {
    
    int storeArray [5] = {0, };
    int num = 0;
    
    num = user_input();
    
    goods_store(storeArray, sizeof(storeArray)/sizeof(int));
    
    search_goods(storeArray, sizeof(storeArray)/sizeof(int), num);
    
    return 0;
}

int user_input(void) {
    
    int num = 0;
    
    while(1){
        printf("input goods number (1 ~ 10) : ");
        scanf("%d", &num);
        if(num < 1 || num > 10) {
            printf("wrong goods number ... try again. \n");
        }else {
            break;
        }
    }
    
    return num;
}

void goods_store(int* store, int size) {
    
    int i = 0;
    
    for(i = 0; i < size; i++) {
        store[i] = rand() % 10 + 1;
    }
    
    return;
}

void search_goods(int* store, int size, int num){
    
    int i = 0;
    int flag = 0;
    
    for(i = 0; i < size; i++) {
        if(num == store[i]) {
            flag = i;
        }
    }
    
    if(flag > 0) {
        printf("%d goods in %d store. \n", num, flag);
    }else {
        printf("%d goods is not here. \n", num);
    }
    
    return;
}
//*/
