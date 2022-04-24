#include <stdio.h>
#include <conio.h>

void main()
{
    int n, num = 0;
    printf("Pls Enter any number to find how many numbers you entered : ");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        num++;
    }

    printf("%d Number entered by you", num);
    getch();
}