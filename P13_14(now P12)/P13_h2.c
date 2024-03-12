#include<stdio.h>
void main()
{
    int row, col, odd=0, even=0;
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
     for (int i = 0; i <row; i++)
    {
        
        for (int j = 0; j <col; j++)
        {
            if ((arr1[i][j]%2)==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
       
    }
    printf("NO of odd is %d and no of even is %d\n", odd, even);
}