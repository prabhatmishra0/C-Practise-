#include <stdio.h>
#include <conio.h>

void main()
{

    int t, i;
    i = 0;
    printf("Pls Select table value \n");
    scanf("%d", &t);
    printf("Table of %d \n", t);
    do
    {
        /* code */
        i = i + 1;
        printf(" %d * %d = %d \n", t, i, t * i);

    } while (i < 10);
    getch();
}