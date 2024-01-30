#include<stdio.h>
#include<math.h>
void main()
{
    float r1, r2, d, a, b, c;
    printf("Enter the values of a b c:");
    scanf("%f %f %f", &a, &b, &c);
    d = (b*b)-(4*a*c);

    switch ((int)d)
    {
    case 0:
        r1= (-b)/(2*a);
        printf("The roots are real and equal \nRoots are %.2f both\n", r1);
        break;
    case 1:
    case -1:{
        r1= (-b+(sqrt(d)))/(2*a);
        r2= (-b-(sqrt(d)))/(2*a);
        printf("The roots are real & unequal. \nRoots are %.2f and %.2f\n", r1, r2);
    }

    default:
        float real_part = -b / (2 * a);
        float imag_part = sqrt(-d) / (2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", real_part, imag_part, real_part, imag_part);
        break;
    }
}