/*/
#include <stdio.h>

int main() {
    
    double numX = 0;
    double result = 0;
    
    printf("x 의 값을 입력하세요 : ");
    scanf("%lf", &numX);
    
    if(numX <= 0){
        result = (numX*numX*numX) - (9*numX) + 2;
    }
    else{
        result = 7 * numX + 2;
    }
    
    printf("f(x)의 값은 %.3lf \n", result);
    
    return 0;
}
//*/
