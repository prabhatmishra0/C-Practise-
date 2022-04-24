#include <stdio.h>
#include <conio.h>

void main()
{
    int a, age;
    for (a = 0; a < 10; a++)
    {
        printf("%d \n Enter Your Age \n ", a);
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }
        if (age > 10)
        {
            continue;
        }
        printf("it's skip");
    }
}