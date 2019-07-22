/*/
#include <stdio.h>

int main() {

    char myArray[6] = {'A','B','C', };
    
    printf("%c %c %c \n", myArray[0],myArray[1],myArray[2]);
    
    myArray[3] = 'C';
    myArray[4] = 'B';
    myArray[5] = 'A';
    
    printf("%c %c %c %c %c %c \n", *&myArray[0], *&myArray[1], *&myArray[2], *&myArray[3], *&myArray[4], *&myArray[5]);
    
    return 0;
}
//*/
