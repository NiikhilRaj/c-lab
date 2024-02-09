#include<stdio.h>
void main()
{
    int n, i=1;
    printf("ENter a number: ");
    scanf("%d", &n);
    printf("THe factors are\n");
    while (i<=n)
    {
        if ((n%i)==0)
        {
            printf("%d ", i);

        }

        i++;
    }
    
}