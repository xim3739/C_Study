/*/
#include <stdio.h>

double input_temperature(void);
void f_to_c(double temperature);

int main() {
    
    double fahrenheit = 0.0;
    
    fahrenheit = input_temperature();
    
    f_to_c(fahrenheit);
    
    
    return 0;
}

double input_temperature(void){
    
    double temperature = 0.0;
    
    printf("input F_temperature : ");
    scanf("%lf",&temperature);
    
    return temperature;
}

void f_to_c(double temperature){
    
    double result = 0.0;
    
    result = 5.0 / 9.0 * (temperature - 32.0);
    
    printf("Celsius : %lf \n", result);
}
//*/
