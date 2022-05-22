#include <stdio.h>
#include <conio.h>

void main(){
    int arr[] = {-1,3,-4,6,-7,-9,-3,4,6,7};

    int s = sizeof(arr)/sizeof(int);
    int n = 0;

    for(int i=0; i<=9; i++){
        if(arr[i] < 0){
            int temp = arr[n];
            arr[n] = arr[i];
            arr[i] = temp;
            n++;
        }
    }

    for(int i = 0; i<=9; i++){
        printf("%d \t", arr[i]);
    }
    
}