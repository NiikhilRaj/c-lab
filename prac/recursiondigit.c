#include<stdio.h>
int count(int a)
{
    if (a>0) return a%10 +count (a/10);
    
}
void main()
{
    printf("%d\n",count(123));
}