#include<stdio.h>
#include<conio.h>

void main() {
    FILE *fp;
    char ch;
    fp = fopen("prabhat.txt","w");
    while ((ch=getchar())!=EOF) // ctrl +z means EOF
    
        fputc(ch,fp);
        fclose(fp);
        fp=fopen("mca.txt","r");
        while((ch=fgetc(fp))!=EOF){
            printf("%c",ch);
            fclose(fp);
    getch();
    
}