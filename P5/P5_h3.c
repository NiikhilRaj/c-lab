#include<stdio.h>
void main()
{
    int h1, s1, m1, h2, m2, s2, sumh, summ, sums;
    printf("Enter time hh mm ss");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Enter time hh mm ss");
    scanf("%d %d %d", &h2, &m2, &s2);

    sums = s1 +s2;
    summ = m1 + m2 + sums/60;
    sumh = h1 + h2 + summ/60;

    sums %= 60;
    summ %= 60;
    sumh %= 24;
    printf("Time sum is %d %d %d", sumh, summ, sums);
    
}
