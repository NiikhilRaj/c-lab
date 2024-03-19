#include<stdio.h>
int hcf(int a, int b)
{
 
  if (b == 0) {
    return a;
  }
  return hcf(b, a% b);
}
void main()
{
    int n1, n2, small, big;
    printf("ENter  two numbers:" );
    scanf("%d %d", &n1, &n2);
    if (n1>n2)
    {
        small=n2;
        big=n1;
    }
    else{
        small=n1;
        big= n2;
    }
    printf("%d\n", hcf(small, big));
}