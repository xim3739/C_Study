//*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define PI 3.141592

bool isNumber(char *str) {
    if (strlen(str) == 0) {
        return false;
    }
    
    bool hasDot = false;
    
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            // do nothing
        } else if (*str == '.') {
            if (hasDot) {
                return false;
            }
            hasDot = true;
        } else {
            return false;
        }
        str += 1;
    }
    return true;
}

int main() {
    
    double result = 0.0;
    char inputBuffer[8];
    char operator = '\0';
    
    printf("*********************\n \n");
    printf("*  + - * / c r s e  *\n \n");
    printf("*********************\n");
    printf("C key makes the value zero.\n");
    printf("The exit key is E or e.\n");
    printf("calculate \n");
    
    while(true) {
        // input any
        printf("input = ");
        scanf("%s", inputBuffer);
        if (isNumber(inputBuffer)) {  // if input is number
            if (operator == '\0') {
                result = atof(inputBuffer);
                continue;
            } else if (operator == '+') {
                result = result + atof(inputBuffer);
            } else if (operator == '-') {
                result = result - atof(inputBuffer);
            } else if (operator == '*') {
                result = result * atof(inputBuffer);
            } else if (operator == '/') {
                result = result / atof(inputBuffer);
            }
            printf("result = %.5f\n", result);
        } else { // evaluator operator
            if (strcmp(inputBuffer, "+") == 0) {
                operator = '+';
            } else if (strcmp(inputBuffer, "-") == 0) {
                operator = '-';
            } else if (strcmp(inputBuffer, "*") == 0) {
                operator = '*';
            } else if (strcmp(inputBuffer, "/") == 0) {
                operator = '/';
            } else if (strcmp(inputBuffer, "reset") == 0) {
                result = 0;
                operator = '\0';
            } else {
                printf("unknown operator... please retry\n");
            }
        }
    }
    return 0;
    
}

//*/
