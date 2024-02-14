#include<stdio.h>
void main()
{
    int row;
    printf("ENter the number of rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = (row-i); j >0 ; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}