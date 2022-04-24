// WAP to check whether a number is divisible by 5 and 7 or not .

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter a Number : \n");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 7 == 0)
    {
        printf("Number is divisble by 5 or 7 .");
    }
    else if (n % 5 == 0)
    {
        printf("Number is divisble by 5.");
    }
    else if (n % 7 == 0)
    {
        printf("Number is divisble by 7.");
    }
    else
    {
        printf("Number is not by 5 or 7 .");
    }
}