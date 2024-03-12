#include<stdio.h>
void main()
{
    int row, col, sum=0;
    printf("Enter the no of rows: ");
    scanf("%d", &row);
    printf("Enter the no of columns: ");
    scanf("%d", &col);
    int arr1[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
        
    }
    for (int i = 0, j=0; i < row && j<col ;j++ && i++ )
    {
        sum+= arr1[i][j];
    }
    printf("Sum of diagonal values is: %d\n", sum);
}