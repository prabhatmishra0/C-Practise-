#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20];
    int salary;
    float num;
};

void main()
{
    struct employee empone, emptwo;
    empone.id = 1;
    emptwo.id = 1;
    // empone.name = 'p';
    // emptwo.name = 'h';
    strcpy(empone.name, "Prabhat Mishra");
    strcpy(emptwo.name, "Hari om Mishra");
    empone.salary = 20, 000;
    emptwo.salary = 22, 000;
    empone.num = 2.02;

    // char names[20];
    // printf("Pls enter Your Name : ");
    // scanf("%s", &names);
    // names = "Prabhat Mishra";
    // printf("\n Your Name is : %s ", names);
    printf("%0.2f", empone.num);
    printf("The First employee all info : %d , %s, %d \n", empone.id, empone.name, empone.salary);
    printf("The First employee all info : %d , %s, %d", emptwo.id, emptwo.name, emptwo.salary);
    getch();
}