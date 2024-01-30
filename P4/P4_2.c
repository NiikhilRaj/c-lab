#include<stdio.h>
void main()
{
    float c, f;
    printf("Enter the temprature in centigrade: ");
    scanf("%f", &c);
    f = (c *1.8)+32;
    printf("Temperaturen in farhenheit is %f:\n", f);
}