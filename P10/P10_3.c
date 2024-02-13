#include<stdio.h>
void main()
{
    int n, ln1=2, ln2=1, nxt;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n>1)
    {
        printf("%d", ln2);
    }
    for (int i = 2; i <=n; i++)
    {
        nxt=ln1+ln2;
        printf(" %d", nxt);
        ln1=ln2;
        ln2=nxt;
    }
    printf("\n");
}