#include<stdio.h>

void main()
{
   int rem, h, m, s;
   printf("Enter time in secinds: ");
   scanf("%d", &s);
   h = s/3600;
   rem = s % 3600;
   m = rem / 60;
   rem = rem % 60;
   printf("%d seconds  = %d hours %d min %d seconds\n", s, h, m, rem );
}