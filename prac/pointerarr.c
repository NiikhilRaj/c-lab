#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr = (int *)malloc(10*sizeof(int));
    int *ptr=arr;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr=arr;
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    free(arr);
}