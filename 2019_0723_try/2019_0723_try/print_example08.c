/*/
#include <stdio.h>
#include <math.h>
#define INPUT_SIZE 10

int my_avg(double sum);
void my_standard_avg(double* p, double sum);

int main() {
    
    double inputNum = 0.0;
    double numArray [INPUT_SIZE] = { };
    double sum = 0.0;
    double avg = 0.0;
    int i = 0;
    
    for(i = 0; i < INPUT_SIZE; i++) {
        
        printf("데이터를 입력하세요 : ");
        scanf("%lf", &inputNum);
        sum = sum + inputNum;
        numArray[i] = inputNum;
        
    }
    
    for(i = 0; i < INPUT_SIZE; i++) {
        printf("%lf ",numArray[i]);
    }
    
    avg = my_avg(sum);
    printf("평균은 %lf \n", avg);
    my_standard_avg(numArray, avg);
    
    return 0;
}

int my_avg(double sum) {
    
    double avg = 0.0;
    
    avg = sum / INPUT_SIZE;
    
    return avg;
}

void my_standard_avg(double* p, double avg) {
    
    double stdAvg = 0.0;
    double result = 0.0;
    int i = 0;
    
    for(i = 0; i < INPUT_SIZE; i++) {
        stdAvg = stdAvg + ((p[i] - avg)*(p[i] - avg));
    }
    
    result = stdAvg / INPUT_SIZE;
    
    printf("표준 편차 값은 %lf \n", sqrt(result));
    
    return;
}
//*/
