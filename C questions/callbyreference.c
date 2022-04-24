#include <stdio.h>
#include <conio.h>

int swapnumbers(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 34;
    int b = 45;
    printf("Before Swaping the Number %d , %d \n", a, b);
    swapnumbers(a, b);
    printf("After Swaping the Numbers %d , %d \n", a, b);
    printf("After add the value %d", add(a, b));
    return 0;
}