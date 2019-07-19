/*/
#include <stdio.h>
#define TIME 12
int main() {
    
    int userTime = 0;
    int userAge = 0;
    int nightMoney = 0;
    int dayMoney = 0;
    
    while(1){
        printf("현재 시간과 나이를 입력하시오. (시간, 나이) : ");
        scanf("%d %d", &userTime, &userAge);
        if(userTime > 24){
            printf("다시 입력 해주세요. \n");
        }
        else{
            break;
        }
    }
    
    if(userTime > 12){
        userTime = userTime - TIME;
        if(userTime >= 5){
            nightMoney = 1;
        }else {
            dayMoney = 1;
        }
        if(nightMoney == 1){
            printf("요금은 만원 입니다. \n");
        }else if(dayMoney == 1 && ((userAge >= 3 && userAge <= 12) || userAge >= 65)){
            printf("요금은 25000원 입니다. \n");
        }else if(dayMoney == 1 && (userAge < 12) && (userAge > 65)){
            printf("요금은 34000원 입니다. \n");
        }
    }else {
        if((userAge >= 3 && userAge <= 12) || userAge >= 65){
            printf("요금은 25000원 입니다. \n");
        }else{
            printf("요금은 34000원 입니다. \n");
        }
    }
    
    
    return 0;
}
//*/
