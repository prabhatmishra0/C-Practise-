#include <stdio.h>
#include <conio.h>

void main()
{
    char x;
    printf(" Enter any Character : \n");
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        printf("Given character is Vowel");
    }
    else
    {
        printf("Given Character is Consonent");
    }
}