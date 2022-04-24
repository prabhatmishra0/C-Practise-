#include <stdio.h>
#include <conio.h>

void main()
{
    int marks, b;
    printf("Pls Enter your marks: \n");
    scanf("%d", &marks);

    switch (marks)
    {
    case 33:
        printf("passed");
        break;
    case 44:
        printf("passed");
        break;
    case 45:
        printf("passed");
        break;
    case 56:
        printf("passed \n");
        printf("You are eligeble for next subject \n");
        scanf("%d", &b);

        switch (b)
        {
        case 45:
            printf("You are eligble for the auddition");
            break;

        default:
            printf("You Tried Best");
            break;
        }
        break;

    default:
        printf("Sorry you are not eligble for the Auddtion");
        break;
    }

    getch();
}