#include<stdio.h>
void main()
{
    int a,temp;
    printf("Enter the array size: ");
    scanf("%d", &a);
    int n[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter array number%d: ", i+1);
        scanf("%d", &n[i]);
    }
    int p;
    for (int i = 0; i < a; i++)
    {
        temp=n[i];
        for(int j=0;j<a;j++)
        {
            if(temp>n[j])
              {p=j;
              temp=n[j];}
        }
        temp=n[i];
        n[i]=n[p];
        n[p]=temp;
    }
    printf("Array contents are: ");
    for (int j = 0; j < a; j++)
    {
        printf("%d ", n[j]);
    }
    printf("\n");
    
}