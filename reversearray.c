#include <stdio.h>

void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 4;
    int i = 0;
    for(i = 0; i <= n; i++){
        arr[i] = arr[n-i];
    }

    for(int f=0; i<=n; i++){
        printf("%d \n", arr[f]);
    }
}