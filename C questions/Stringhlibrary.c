#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char fname[15], lname[15];
    printf("Pls Enter First Name:");

    // gets function data ko user se lene ka kam karta hai
    gets(fname);
    printf("\n");
    printf("Pls Enter Last Name:");
    gets(lname);
    printf("\n");

    // puts function data ko show karta hai
    puts(strcat(fname, lname));

    printf("\n");
    printf("The value of fname : %c \n", fname);
    printf("Nothing Value here;");

    char fullname[40];

    // strcpy data ko copy karne ka kam karta hai
    strcpy(fullname, strcat(fname, lname));
    printf("\n");

    // strlen cheack the length of the value who you enterd in function
    int n = strlen(fname);

    printf("\n");
    printf("The Length Of your Name : %d", n);
    printf("\n");

    // strrev string ko ulta likhta hai
    puts(strrev(fname));
    printf("\n");
    printf("The value of fname : %c \n", fname);
}
