#include <stdio.h>
#include <conio.h>

void main(){
    int arr[] = {1, 4, 3, 2, 6, 7};
    int n = 5;
    int count = 0;


    for(int i = 0; i <= n; i++ ){

        if(arr[i] == 0){
            break;
            return 0;
        }

        i += arr[i];
        count++;
    }

    printf("%d" , count );
}