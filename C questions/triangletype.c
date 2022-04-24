#include <stdio.h>
#include <conio.h>

// WAP to check whether the triangle is equilateral, isosceles or scalene triangle.

void main()
{
    int a, b, c;
    printf("Enter the three sides of triangle : ");
    scanf("%d %d %d", &a, &b, &c);

    // if both sides are equal so triangle is equilateral
    if (a == b && b == c)
    {
        printf("Triangle is Equilateral.");
    }
    else if (a == b || b == c || c == a)
    {
        // else if two sides are equal so triangle is isosceles
        printf("Triangle is isosceles");
    }
    else
    {
        // if any sides are not equal so triangle is scalene
        printf("The triangle is scalene");
    }
}