/*/
#include <stdio.h>

int main() {
    
    int time = 0;
    int age = 0;
    int timeValue = 0;
    int ageValue = 0;
    
    while(1){
        printf("현재 시간과 나이를 입력하세요. (시간, 나이) : ");
        scanf("%d %d", &time, &age);
        if(time < 0 || time > 24){
            printf("다시 입력하세요 \n");
        }
        else if(age < 0 || age > 100) {
            printf("다시 입력하세요 \n");
        }else
            break;
    }
    
    if(time < 17){
        timeValue = 1;
    }else
        timeValue = 0;
    
    if((age >= 3 && age <= 12) || (age >= 65)){
        ageValue = 1;
    }else
        ageValue = 0;
    
    if(timeValue == 1 && ageValue == 1) {
        printf("요금은 25000 원입니다. \n");
    }else if(timeValue == 1 && ageValue == 0) {
        printf("요금은 34000원 입니다. \n");
    }else{
        printf("요금은 10000원 입니다. \n");
    }
    
    return 0;
}
//*/
