#include <stdio.h>
#include <conio.h>

void main()
{
    char c;
    printf("Enter the light color : ");
    scanf("%c", &c);
    if (c == 'r')
    {
        printf("Stop !!");
    }
    else if (c == 'y')
    {
        printf("Go Slow");
    }
    else if (c == 'g')
    {
        printf("Go >>>>> ");
    }
    else
    {
        printf("Pls enter right color and use small later.");
    }
}