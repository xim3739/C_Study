/*/
#include <stdio.h>

int sum(int *arr, int size);
int avg(int *arr, int size);

int main() {
    
    int studentScore [10] = { };
    int scoreSum = 0;
    int scoreAvg = 0;
    int i = 0;
    
    for(i = 0; i < 10; i++) {
        printf("student %d : ", i+1);
        scanf("%d",&studentScore[i]);
    }
    
    
    scoreSum = sum(studentScore,sizeof(studentScore)/sizeof(int));
    
    //sizeof(array) = int array[1] 은 4 바이트 (배열의 크기는 4 바이트)
    //sizeof(student) 는 student[10] 이기 때문에 10 * 4 = 40 이다.
    //int student[10] int 는 4 바이트 크기이다.
    
    scoreAvg = avg(studentScore,sizeof(studentScore)/sizeof(int));
    
    printf("sum = %d \n", scoreSum);
    printf("avg = %d \n", scoreAvg);
    
    return 0;
}

int sum(int *arr, int size){
            //arr[]
    int i = 0;
    int sum = 0;
    
    for(i = 0; i < size; i++){
        
        sum = sum + arr[i];
        
    }
    
    return sum;
    
}

int avg(int *arr, int size) {
    
    int i = 0;
    int sum = 0;
    
    for(i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    
    return sum / size;
    
}
//*/
