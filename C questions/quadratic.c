#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    // in quadratic equation we have need three a, b, c
    // and than we check demonsetrate (d) value = b(square) - 4ac

    printf("Enter the value of Your a,b,c : \n");
    int a, b, c, d, root1, root2, realpeart, imagpart;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // find the value of d = b(squre) - 4ac
    d = b * 2 - 4 * a * c;

    // print the value of d
    printf("The value of d = %d \n", d);

    // check condition if f==0 so use it formula { this is condition for real or equal roots }
    if (d == 0)
    {
        root1 = root2 = -b / 2 * a;
        printf("The value of root1 = %d & root2 = %d", root1, root2);
    }
    // check condition if condition for real and different roots
    else if (d > 0)
    {
        root1 = -b - sqrt(d) / 2 * a;
        root2 = +b + sqrt(d) / 2 * a;
        printf("The value of root1 = %d & root2 = %d", root1, root2);
    }
    else
    {
        //     root1 = -
        //     realPart = -b / (2 * a);
        //     imagPart = sqrt(-d) / (2 * a);
        //     printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        printf("Roots are not real");
    }

    getch();
}