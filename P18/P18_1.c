#include<stdio.h>
int fac(int n){
    if (n==0)
    {
        return 1;
    }
    else {
        return n*fac(n-1);
    }
    
}
void main()
{
    int a;
   printf("Enter the number: ");
   scanf("%d", &a);
   printf("%d\n", fac(a));

}