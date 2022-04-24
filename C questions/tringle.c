#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter three sides of tringle : ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) || (b + c > a) || (c + a > b))
    {
        printf("Trangle is valid.");
    }
    else
    {
        printf("Trangle is not valid");
    }
}