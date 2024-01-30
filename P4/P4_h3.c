#include<stdio.h>
void main()
{
    int p1, rs, p2;
    printf("Enter the amount in paisa: ");
    scanf("%d", &p1);
    rs = p1/100;
    p2 = p1-(rs*100);
    printf("%d paisa = %d Rupee and %d Paisa\n", p1, rs, p2);

}