#include<stdio.h>
void main()
{
    int row, col;
    printf("Enter the rows and cols: ");
    scanf("%d %d", &row, &col);
    int arr[row][col], arrt[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i!=j)
            {
                arrt[i][j]=arr[j][i];
            }
            else if (i==j)
            {
                arrt[i][j]=arr[i][j];
            }
            
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arrt[i][j]);
            
        }
        printf("\n");
    }
}