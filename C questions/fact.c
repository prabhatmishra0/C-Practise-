#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Pls Enter any Number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf(" %d ", i);
        }
    }
}