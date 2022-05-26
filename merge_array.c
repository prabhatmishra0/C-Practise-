#include <stdio.h>
#include <conio.h>

void merge(int arr1(), int arr2, int n , int m){
    int i = n-1; 
    int j = 0;

    while (i>= 0 && j<=m)
    {
        if(arr1[i] < arr2[j]){
            int temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp; 
        }

        i--;
        j++;
    }

    // sortint arr1 

    for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr1[i] > arr1[j]) {    
               temp = arr1[i];    
               arr1[i] = arr1[j];    
               arr1[j] = temp;    
           }     
        }     
    }

    // sorting arr2

    for (int i = 0; i < m; i++) {     
        for (int j = i+1; j < m; j++) {     
           if(arr2[i] > arr2[j]) {    
               temp = arr2[i];    
               arr2[i] = arr2[j];    
               arr2[j] = temp;    
           }     
        }     
    }


    // printing arr1

    for(int i = 0; i<=n; i++){
        printf(arr1[i]);
    }

    // printing arr2

    for(int i = 0; i<=n; i++){
        printf(arr2[i]);
    }
    
}

void main(){
   n = 4, m = 5;
   arr1[] = {1, 3, 5, 7};
   arr2[] = {0, 2, 6, 8, 9};

   merge(arr1, arr2, n , m);

}