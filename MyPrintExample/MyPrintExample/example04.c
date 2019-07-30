/*/
#include <stdio.h>

double recursive(double n);

int main() {
    
    double num = 0;
    double result = 0;
    
    printf("input number :");
    scanf("%lf", &num);
    
    result = recursive(num);
    
    printf("%lf \n", result);
    
    
    return 0;
}

double recursive(double n) {

    if(n <= 1) {
        return 1;
    }else {
        return (1.0/n+recursive(n-1));
    }
}
//*/
