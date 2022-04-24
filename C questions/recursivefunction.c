#include <stdio.h>
#include <conio.h>

// Author: Prabhat Mishra
// Purpose: Learn About Recursive Function

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

void main()
{
    int n;
    printf("Pls enter the number : ");
    scanf("%d", &n);
    printf("The factorial number of %d is %d", n, factorial(n));
}
