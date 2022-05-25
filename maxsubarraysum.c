#include<stdio.h>
#include<conio.h>

// int maxsubarraysum(int arr[] , int n){



// }

void main(){
    // int arr[] = {-5,-6,-7,-2,-1,-2,-3};
    int arr[] = {1,2,3,-2,5}
    int n = sizeof(arr[])/sizeof(int);

    int maxsum = arr[0];
    int cursum = 0;
    for(int i = 0; i<=n; i++){

        // is that a solution only for mix array positive and integer element 

        // cursum = cursum + arr[i];
        // if(cursum > maxsum)
        //     maxsum = cursum;
        
        // if(cursum < 0)
        //     cursum = 0;

        
        // is that a solution for both fully negative element and mix element in array 
        cursum += arr[i];
            if(cursum>maxsum){
                maxsum = cursum;
            }
            
            if(cursum<0){
                cursum = 0;
            }
    }

    printf("%d" , maxsum);
}