#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Pls Enter any number to get fibnacci sequence");
    scanf("%d", &n);
    int a = 1, b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0 || i == 1)
        {
            if (i == 0)
            {
                printf("%d \n", i);
            }
            else
            {
                printf("%d \n", i);
                printf("%d \n", i);
            }
        }
        else
        {
            printf("%d \n", a + b);
            a = a + b;
            b = a - b;
        }
    }
}