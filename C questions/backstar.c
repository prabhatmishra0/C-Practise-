#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Pls Enter Some Number : ");
    scanf("%d", &n);
    // for (int i = n; i >= 0; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}