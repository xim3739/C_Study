//
//  star.c
//  Chapter06
//
//  Created by 심재현 on 11/07/2019.
//  Copyright © 2019 심재현. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int i, e;
    for(i=1; i < 5; i++){
        for(e=1; e+i < 5; e++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
