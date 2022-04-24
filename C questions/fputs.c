#include <stdio.h>
#include <Conio.h>

void main() {
    FILE *fp;
    fp = fopen("harry.txt","a");
    // char c = fgetc(fp);
    // printf("This character from file : %c \n", c); 
    // c = fgetc(fp);
    // printf("This character from file : %c \n", c);
    //  c = fgetc(fp);
    // printf("This character from file : %c \n", c);
    //  c = fgetc(fp);
    // printf("This character from file : %c \n", c);
    //  c = fgetc(fp);
    // printf("This character from file : %c \n", c);

    char s[55];
    // fgets(s, 8, fp);
    // printf("This is first 12 string in your file : %s ", s);

    char c = 'c';
    char str[15] = "Prabhat Mishra";
    // fputc(c , fp);
    fputs(str, fp);



    fclose(fp);
    printf("It's an beep sound \a ");
}