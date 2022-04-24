#include <stdio.h>
#include <conio.h>
#include <limits.h>

int main(){
    // int s = 5;
    int arr[5] = {2,11,87,1,9};
    int max = INT_MIN;
    
    // finding max in array
    for(int i = 0; i <=4; i++ ){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int min = INT_MAX;
    for(int i = 0; i<=4; i++){
        if(arr[i] < min){
            arr[i] = min;
        }
    }

    printf("Max value of array : %d", max);

    return 0;
}