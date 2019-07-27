/*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double sin_degree(int degree);

int main(){
    
    int degree = 0;
    double degreeResult = 0.0;
    
    for(degree = 0; degree <= 180; degree = degree + 10){
        
        degreeResult = sin_degree(degree);
        
        printf("sin(%d) is %lf \n", degree,sin(degreeResult));
    }
    return 0;
}

double sin_degree(int degree){
    
    double result = 0.0;
    
    result = (PI * (double)degree)/180.0;
    
    return result;
}
//*/
