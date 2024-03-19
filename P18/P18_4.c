#include<stdio.h>
int digsum(int a){
    if (a<10)       
    {
        return a;
    }
    return a%10 + digsum(a/10);
}
void main()
{
    int n;
    printf("ENter a  number: ");
    scanf("%d", &n);
    printf("%d\n", digsum(n));
}