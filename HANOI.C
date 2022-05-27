#include <stdio.h>
#include <conio.h>

// declare tower function 

void tower(char , char , char , int);

int main()
{
    int n;

    printf("Enter no. of disc : ");
    scanf("%d", &n);

    tower('A', 'C' , 'B' , n);

    getch();

    
}

void tower(char n1, char n2 , char n3 , int p){
    
    if(p<=0)
        printf("illeagal entry");

    if(p==1)
    {
        printf("move %d from %c to %c" , p , n1 , n2);
        return;
    }

    // move (n-1) disc from A to b taking as supporting 

    tower(n1 , n3 , n2 , p-1);

    // move remaining disc from A to C 

    printf("move dics %d from %c to %c ", p , n1 ,n2);

    // new move (n-1) disc from B to c 
    tower(n3 , n2 , n1 , p-1);


}