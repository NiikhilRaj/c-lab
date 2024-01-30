#include<stdio.h>
void main()
{
    int m, km, rem;
    printf("Enter the distance in meters: ");
    scanf("%d", &m);
    km = m/1000;
    rem = m%1000;
    printf("%d m = %d km and %d m\n", m, km, rem);
}
