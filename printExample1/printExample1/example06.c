/*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define PI 3.141592

void exit(int x);

int main() {
    
    char calName = 0;
    double num1 = 0.0, num2 = 0.0;
    bool reset = false;
    
    double result = 0.0;
 
    printf("**XIM's Calculrator**\n \n");
    printf("  + - * / c r s e  *\n \n");
    printf("*********************\n");
    printf("C key makes the value zero.\n");
    printf("The exit key is E or e.\n");
    printf("calculate \n");

    while(true) {
        while(true) {
            if(result == 0) {
                //while(1){
                    rewind(stdin);
                    scanf("%lf", &num1);
                    //if(num1 != ){
                        //printf("wrong formula. Please try again.2\n");
                        //continue;
                    //}
                //}
                rewind(stdin);
                scanf("%c", &calName);
                
            }
            else{
                
                while(1){
                    
                    rewind(stdin);
                    scanf("%c", &calName);
                    
                    if(calName == '+' || calName == '-' || calName == '*' || calName == '/' || calName == 'c' || calName == 'C' || calName == 'r' || calName == 's' || calName == 'R' || calName == 'S'){
                        
                        switch (calName) {
                            case 's': case 'S':
                                result = sin(result*PI/180);
                                printf("%lf\n", result);
                                break;
                            case '+':
                                rewind(stdin);
                                scanf("%lf", &num2);
                                result = result + num2;
                                printf("%lf\n", result);
                                break;
                            case '-':
                                rewind(stdin);
                                scanf("%lf", &num2);
                                result = result - num2;
                                printf("%lf\n", result);
                                break;
                            case '*':
                                rewind(stdin);
                                scanf("%lf", &num2);
                                result = result * num2;
                                printf("%lf\n", result);
                                break;
                            case '/':
                                while(1){
                                rewind(stdin);
                                    scanf("%lf", &num2);
                                    if(num2 == 0){
                                        printf("wrong formula. Please try again.\n");
                                        continue;
                                    }else{
                                        result = result / num2;
                                        printf("%lf\n", result);
                                    }
                                    break;
                                }
                                break;
                            case 'c': case 'C':
                                result = 0;
                                printf("%lf\n",result);
                                reset = true;
                                break;
                            case 'r': case 'R':
                                result = sqrt(result);
                                printf("%lf\n", result);
                                break;
                            case 'e': case 'E':
                                printf("Exit the calculator.\n THANKS MAN!!\n");
                                exit(1);
                            }
                            if(result == 0)
                                break;
                        }
                        else{
                            printf("wrong formula. Please try again.\n");
                        }
                    }
                }
            
                if(calName == '+' || calName == '-' || calName == '*' || calName == '/' || calName == '*' || calName == 'e' || calName == 'E' || calName == 'c' || calName == 'C' || calName == 'r' || calName =='R' || calName == 's' || calName == 'S'){
                    
                    switch (calName) {
                        case 's': case 'S':
                            result = sin(num1*PI/180);
                            printf("%lf\n", result);
                            break;
                        case '+':
                            rewind(stdin);
                            scanf("%lf", &num2);
                            result = num1 + num2;
                            printf("%lf\n", result);
                            break;
                        case '-':
                            rewind(stdin);
                            scanf("%lf", &num2);
                            result = num1 - num2;
                            printf("%lf\n", result);
                            break;
                        case '*':
                            rewind(stdin);
                            scanf("%lf", &num2);
                            result = num1 * num2;
                            printf("%lf\n", result);
                            break;
                        case '/':
                            while(1){
                                rewind(stdin);
                                scanf("%lf", &num2);
                                if(num2 == 0){
                                    printf("wrong formula. Please try again.\n");
                                    continue;
                                }else{
                                    result = num1 / num2;
                                    printf("%lf\n", result);
                                }
                                break;
                            }
                            break;
                        case 'c': case 'C':
                            if(reset == false){
                                result = 0;
                                printf("%lf\n",result);
                                break;
                            }else
                                break;
                            break;
                        case 'r': case 'R':
                            result = sqrt(num1);
                            printf("%lf\n", result);
                            break;
                        case 'e': case 'E':
                            printf("Exit the calculator.\n THANKS MAN!\n");
                            exit(1);
                    }
                    if(result == 0)
                    break;
                }
                else {
                    printf("wrong formula. Please try again.\n");
                }
        }
    }
    
    return 0;
    
}

//*/
