#include <stdio.h>
#include <conio.h>

void main(){
    int arr[8] = {1,1,0,2,1,2,1,2};
    int n = 0;
    
    // sort in sequence 
    for(int i=0; i<=7; i++){
        if(arr[i] == 0){
            // printf("%d \n", arr[n]);
            int temp = arr[n];
            arr[n] = arr[i];
            arr[i] = temp;
            n++;
        }
    }

    for(int i = n; i<=7; i++){
        if(arr[i] == 1 ){
           int temp = arr[n];
            arr[n] = arr[i];
            arr[i] = temp;
            n++;
        }
    }

    for(int i=0; i <= 7; i++){
        printf("%d \n", arr[i]);
    }
}












