#include<stdio.h>
void main()
{
    int row, col;
    printf("Enter the no of rows: ");
    scanf("%d", &row);
    printf("Enter the no of columns: ");
    scanf("%d", &col);
    int arr1[row][col], arr2[row][col], arrsum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
        
    }
    printf("Sum of matrices:\n");
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < col; j++)
        {
            arrsum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t", arrsum[i][j]);
        }
        printf("\n");
    }
}