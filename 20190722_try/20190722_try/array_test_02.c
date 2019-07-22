//*/
#include <stdio.h>

int sum(int *arr, int a);
int avg(int *arr, int a);

int main() {
    
    int studentScore [10] = { };
    int scoreSum = 0;
    int scoreAvg = 0;
    
    studentScore[0] = 80;
    studentScore[1] = 40;
    studentScore[2] = 70;
    studentScore[3] = 60;
    studentScore[4] = 90;
    studentScore[5] = 80;
    studentScore[6] = 10;
    studentScore[7] = 20;
    studentScore[8] = 20;
    studentScore[9] = 90;
    
    
    scoreSum = sum(studentScore,sizeof(studentScore)/sizeof(int));
    
    //sizeof(array) = int array[1] 은 4 바이트 (배열의 크기는 4 바이트)
    //sizeof(student) 는 student[10] 이기 때문에 10 * 4 = 40 이다.
    //int student[10] int 는 4 바이트 크기이다.
    
    scoreAvg = avg(studentScore,sizeof(studentScore)/sizeof(int));
    
    printf("sum = %d \n", scoreSum);
    printf("avg = %d \n", scoreAvg);
    
    return 0;
}

int sum(int *arr, int a){
            //arr[]
    int i = 0;
    int sum = 0;
    
    for(i = 0; i < a; i++){
        
        sum = sum + arr[i];
        
    }
    
    return sum;
    
}

int avg(int *arr, int a) {
    
    int i = 0;
    int sum = 0;
    
    for(i = 0; i < a; i++){
        sum = sum + arr[i];
    }
    
    return sum / a;
    
}
//*/
