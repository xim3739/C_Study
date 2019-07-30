/*/
#include <stdio.h>

int input_num(void);
int get_tri_num(int num);

int main() {
    
    int num = 0;
    int result = 0;
    
    num = input_num();
    result = get_tri_num(num);
    
    printf("%d \n", result);
    
    return 0;
}

int input_num(void){
    
    int num = 0;
    
    printf("input number : ");
    scanf("%d", &num);
    
    return num;
}

int get_tri_num(int num) {
    
    if(num <= 1) {
        return 1;
    }else {
        return (num + get_tri_num(num - 1));
    }
    
}
//*/
