#include <stdio.h>
#include <conio.h>
#include <string.h>

// name(int);

// void main()
// {
//     int a = 10;
//     name(a);
//     getch();
// }

// name(int x)
// {
//     if (x <= 10)
//     {
//         printf("Prabhat Mishra \n");
//         x = x - 1;
//         name(x);
//     }
// }

void myn()
{
    int x = 10;
    printf("Prabhat Mishra \n");
    x--;
    if (x >= 1)
    {
        // myn(x);
    }
}

void main()
{
    myn();
}
