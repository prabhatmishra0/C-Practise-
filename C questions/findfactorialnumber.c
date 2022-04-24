#include <stdio.h>
#include <conio.h>

void main()
{
    int num, f = 1;
    printf("Pls Enter Who's Numbers jiska Aap ko Factorial Numbers Chahiye");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        f = f * i;
    }
    printf("Your Factorial Number is: %d", f);
}