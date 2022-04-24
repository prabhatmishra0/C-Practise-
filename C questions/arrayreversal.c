#include <stdio.h>
#include <stdlib.h>

void main()
{
    // ye mera tarika reserch karne ke bad net se
    int arr[] = {1, 3, 4, 5, 6};
    int al = (int)(sizeof(arr) / sizeof(arr[0]));
    // printf("Print the size of array is %d \n", (int)(sizeof(arr) / sizeof(arr[0])));
    // in my word pahle array ka total size nikal lo aur iske bad uske ek size se divde ker do array ki length nikal ayegi
    // printf("Print the size of array is %d \n", (int) sizeof(arr[0]));

    // printf("%d \n", al);
    for (int i = (al - 1); i >= 0; i--)
    {
        printf("The value of element %d is %d \n", i, arr[i]);
    }


    // ye tarika jo hai wo harry bhai ka hai

}