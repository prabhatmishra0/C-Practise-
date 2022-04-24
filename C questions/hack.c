#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    // int num;
    // char name[15];
    // scanf("%d", &num);
    // printf("pls enter name : ");
    // gets(name);
    // num = num * 2;
    // printf("%d", num);
    // puts(name);
    // getch();\
    #include<stdio.h>
    char str[20];
    printf("Enter the string? ");
    fgets(str, 20, stdin);
    printf("%s", str);
}