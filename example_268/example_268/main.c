/*/
#include <stdio.h>

int input_under_line(void);
int input_height_line(void);
void get_area(int underLine, int heighLine);

int main() {
    
    int underLine = 0;
    int heighLine = 0;
    
    underLine = input_under_line();
    heighLine = input_height_line();
    get_area(underLine, heighLine);
    
    return 0;
}

int input_under_line(void){
    
    int line = 0;
    
    while(1){
    
        printf("밑변을 입력하세요 : ");
        scanf("%d", &line);
        
        if(line < 1 || line > 100){
            printf("wrong input line...try again. \n");
        }else{
            break;
        }
    }
    
    return line;
}

int input_height_line(void){
    
    int line = 0;
    
    while(1){
        
        printf("높이을 입력하세요 : ");
        scanf("%d", &line);
        
        if(line < 1 || line > 100){
            printf("wrong input line...try again. \n");
        }else{
            break;
        }
    }
    
    return line;
}

void get_area(int underLine, int heighLine){
    
    int getArea = 0;
    getArea = underLine * heighLine;
    
    printf("사각형의 넓이는 %d 입니다. \n", getArea);
    
    return;
    
}
//*/
