#include <stdio.h>
#include <conio.h>

void main() {
    FILE *open;
    char class[54] = "My class name is MCA";

    // open a file 
    // open = fopen("harry.txt","r");
    // fscanf(open,"%s",class);
    // printf("That things in a file : %s ", class);

    // write in file (overwriting)
    open = fopen("harry.txt","w");
    fprintf(open,"%s", class);
}