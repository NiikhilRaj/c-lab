#include<stdio.h>
void main()
{
    float s1, s2, s3, s4, s5, avg, per;
    printf("Enter the marks of 5 subjects");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    avg = (s1 + s2 + s3 + s4 + s5)/5;
    per = (avg/200)*100;
    printf("The average marks is: %f \n The percentage is %f ", avg, per);
}