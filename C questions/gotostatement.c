#include <stdio.h>
#include <conio.h>

void main()
{
    // start:
    // goto end;
    printf("Here start Go to statement for the end \n");
    //     // goto end;

    //     goto start;
    // end:
    //     printf("here end goto statement ");
    int i, j, a;
    for (i = 0; i < 7; i++)
    {
        printf("%d", i);
        for(j = 0; j < 6; j++)
        {
            scanf("%d", &a);
            if (a == 0)
            {
                goto label;
            }
        }
    }

label:
    printf("Here program khatam");
}