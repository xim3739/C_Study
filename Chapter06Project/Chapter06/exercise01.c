//
//  exercise01.c
//  Chapter06
//
//  Created by 심재현 on 11/07/2019.
//  Copyright © 2019 심재현. All rights reserved.
//

#include <stdio.h>

int main() {
    
    double num = 0.0;
    
    while(1){
        
        printf("1 ~ 100 까지의 실수를 입력하세요 : ");
        scanf("%lf", &num);
        
        if(num < 0 || num > 100)
            printf("%.03lf 를 입력하셨습니다. 다시 입력하세요. \n",num);
        else
            break;
        
    }
    
    printf("당신이 입력한 수는 %.03lf 입니다. \n", num);
    
    return 0;
}
