#include <stdio.h>
#include<conio.h>

void main() {   

    FILE *myn = NULL;
    char name[24] = "<?php echo ?>";
    char reading[24];
    
    // Reading a file ✋✋
    // fopen file ko open karne ka aur kis mode me open karna hai is the decide by fopen 
    // jaise user ki value ko padhne ka scanf karta hai vaise hi file ko padhne ka kam fscanf karts hai
    // fscanf(file pointer , than identifier , variable name)

    // myn = fopen("harry.txt","r");
    // fscanf(myn,"%s",reading);
    // printf("Is that a value of file : %s \n",reading );


    
    // writing a file here ✋✋✋
    // fprintf function file me likhane ka kam karta hai 
    // fprintf(file pionter , "identifier" , variable)

    myn = fopen("prabhu.php","a");
    fprintf(myn,"%s", name);

    
    


}