#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    for (i = 1; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("* \n");
        }
        else
        {
            printf("%d \n", i);
        }
        // printf("%d \n" i % i);
    }
    getch();
}