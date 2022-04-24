#include<stdio.h>
#include<conio.h>

void main()
{
    int n, sum = 0;
    printf("Pls Enter any Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of Natural Number is : %d", sum);
}