#include <stdio.h>

void main(){

    int arr[6] = {1,2,3,4,5,6};

    for(int i=0; i<=5; i++){

        int c = arr[i];
        i++;
        // arr[i] = c;
        arr[i-1] = arr[i];
        arr[i] = c;
 
    }

    for(int f = 0; f<=5; f++){

        printf("%d \n", arr[f]);
       
    }
}