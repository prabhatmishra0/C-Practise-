#include<stdio.h>
int main()
{
    int row_size,col_size;
    //Get size of matrix
    printf("Enter the row Size Of the Matrix:");
    scanf("%d",&row_size);
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d",&col_size);

    int matrix[row_size][col_size];

    //Taking input of the matrix
    int i,j;
    printf("Enter the Matrix Element:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    //Calculate sum of given matrix Elements
    int sum=0;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            sum+=matrix[i][j];
        }
    }
    //Display The Sum Of Given Matrix Elements
    printf("Sum of the Given Matrix Elements is: %d",sum);
}