#include <stdio.h>
#include <conio.h>

void main()
{
    int n, num, rem, res = 0;
    printf("Pls Enter any number");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;

        res = res + rem * rem * rem;
    }

    if (res == n)
    {
        printf("Number is palindrome");
    }
    printf("Number is not a palindrome");

    getch();
}