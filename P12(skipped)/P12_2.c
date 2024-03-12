#include<stdio.h>
void main()
{
    int a, count=0;
    printf("Enter the array size: ");
    scanf("%d", &a);
    int n[a];
    printf("Enter %d numbers: \n", a);
    for (int l = 0; l < a; l++)
    {
        scanf("%d", &n[l]);
    }
    printf("The unique elements of the array are:\n");
    for (int i = 0; i < (a); i++)
    {
        count=0;
        for (int j = (i+1); j < a; j++)
        {
            if (n[i]==n[j])
            {
                count++;
                break;
            }   
        }
        for (int j = (i-1); j >=0; j--)
        {
            if (n[i]==n[j])
            {
                count++;
            }   
        }
        
        if (count==0)
        {
            printf("%d ", n[i]);
        }
    }
    printf("\n");
}