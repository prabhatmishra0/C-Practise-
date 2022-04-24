#include <stdio.h>
#include <conio.h>

void printchar(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

void main()
{
    // char name[10] = {'p', 'r', 'a', 'b', 'h', 'a', 't', '\0'};
    // char name[] = "PrabhatMishra";
    // printchar(name);

    // Getting string and printing string with readymade function
    char name[45];
    printf("Pls Enter Any String or Your Name");
    gets(name);
    printf("Using Gets and puts i'll show yow the what you enterd : ");
    puts(name);
}
