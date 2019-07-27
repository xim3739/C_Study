/*/
#include <stdio.h>
#include <math.h>

void get_distance(void);
void x_input_location(double *x1, double *x2);
void y_input_location(double *y1, double *y2);

int main() {
    
    get_distance();
    
    return 0;
}

void get_distance(void){
    
    double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0;
    double result1 = 0.0; double result2 = 0.0;
    
    x_input_location(&x1, &y1);
    y_input_location(&x2, &y2);
    
    result1 = (x1 - x2) * (x1 - x2);
    result2 = (y1 - y2) * (y1 - y2);
    
    
    printf("result = %lf \n", sqrt(result1 + result2));
    
    return;
    
}

void x_input_location(double *x1, double *x2){
    
    while(1){
        printf("input x location : ");
        scanf("%lf %lf", x1, x2);
        if(x1 < 0 && x2 < 0) {
            printf("wrong input x location ... try again. \n");
        }else {
            break;
        }
    }
    
    return;
}

void y_input_location(double *y1, double *y2){
    
    while(1){
        printf("input y location : ");
        scanf("%lf %lf", y1, y2);
        if(y1 < 0 && y2 < 0) {
            printf("wrong input y location ... try again. \n");
        }else {
            break;
        }
    }
    
    return;
}
//*/
