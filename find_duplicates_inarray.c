#include <stdio.h>

void main(){
    
    int arr[9] = { 1, 4, 5, 3, 5, 7, 4, 9, 2};

    for(int i = 0; i<=8; i++){
        for(int j = i+1; j<=8; j++){
            if(arr[i] < arr[j]){
                printf("%d \n ", arr[i]);
            }
        }
    }

}