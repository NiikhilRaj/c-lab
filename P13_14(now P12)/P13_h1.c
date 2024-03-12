#include<stdio.h>
void main()
{
    int row, col;
    printf("Enter the no of rows: ");
    scanf("%d", &row);
    printf("Enter the no of columns: ");
    scanf("%d", &col);
    int arr1[row][col], arr2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
        
    }
     for (int i = 0; i <row; i++)
    {
        
        for (int j = 0; j <col; j++)
        {
            if (i==j && arr1[i][j]!=1)
            {
                printf("Matrix is not a identity matrix.\n");
                return;
            }
            else if (i!=j && arr1[i][j]!=0)
            {
                printf("Matrix is not a identity matrix.\n");
                return;
            }
        }
       
    }
    printf("Matrix A is identity\n");
}