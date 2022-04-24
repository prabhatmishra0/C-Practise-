#include <stdio.h>
#include <conio.h>
#include <string.h>

// union is memmory efficient and also he increase the speed
union students
{
    char name[20];
    int id;
};

void main()
{
    union students s1;
    s1.id = 2;
    // strcpy(s1.name, "Prabhat");
    printf("Your id is : %d \n", s1.id);
    // printf("Your Name is : %s ", s1.name);
    getch();
}
