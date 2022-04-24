#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int a, b, c, d;
    printf("Enter any Number : ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = b * b - 4 * a * c;
    printf("%d", d);
}