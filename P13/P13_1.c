#include<stdio.h>
void main()
{
    int row, col;
    printf("Enter the no of cities: ");
    scanf("%d", &row);
    printf("Enter the no of days: ");
    scanf("%d", &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        printf("Enter %d values of temp for city %d: ", col, i+1);
         for (int j = 0; j < col; j++)
         {
            scanf("%d", &arr[i][j]);
         }
         
    }
    for (int i = 0; i < row; i++)
    {
         for (int j = 0; j < col; j++)
         {
            printf("City %d, Day %d= %d\n", i+1, j+1, arr[i][j]);
         }
         
    }
    printf("\n");
}