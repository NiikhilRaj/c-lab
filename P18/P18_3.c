#include<stdio.h>
int digisum(int a){
    if (a<10)
    {
        return a;
    }
    return a%10 + digisum(a/10);
    
}
void main()
{
    int n;
    printf("ENter a number: ");
    scanf("%d", &n);
    printf("%d\n", digisum(n));
}