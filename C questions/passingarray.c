#include <stdio.h>
#include <conio.h>

// this function will return all array value
int printarray(int array[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value at %d is %d \n", i, array[i]);
    }

    // array[3] = 456;
    return 0;
}
void func2(int *p)
{
    for (int i = 0; i <= 6; i++)
    {
        printf("The value at %d is %d \n", i, *(p + i));
    }
    *(p + 2) = 2653;
}

void main()
{
    int arr[] = {32, 13, 12, 15, 16, 18};
    // printf("Before call the function the value arr[3] = %d \n", arr[3]);
    printarray(arr);
    // printf("After call the function the value arr[3] = %d \n", arr[3]);
    printf("\n \n");
    // printf("The size of the array is %d \n", sizeof(arr));

    func2(arr);

    getch();
}