/*/
#include <stdio.h>
#define PI 3.141592

double input_radius(void);
void cal_area(double radius);

int main() {
    
    double radius = 0.0;
    
    radius = input_radius();
    cal_area(radius);
    
    return 0;
}

double input_radius(void){
    
    double radius = 0.0;
    
    while(1){
        
        printf("input radius : ");
        scanf("%lf", &radius);
        if(radius < 1){
            printf("wrong input radius ... try again \n");
        }else{
            break;
        }
    }
    
    return radius;
}

void cal_area(double radius){
    
    double result = 0.0;
    
    result = PI * radius * radius;
    
    printf("area : %lf \n", result);
    
}
//*/
