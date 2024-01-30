#include<stdio.h>
#include<math.h>

void main()
{
    float r1, r2, d, a, b, c;
    printf("Enter the values of a b c:");
    scanf("%f %f %f", &a, &b, &c);
    d = (b*b)-(4*a*c);

    if (d==0)
    {
        r1= (-b+(sqrt(d)))/(2*a);
        printf("The roots are real and equal \nRoots are %.2f both\n", r1);
    }

    else if (d>0)
    {
        r1= (-b+(sqrt(d)))/(2*a);
        r2= (-b-(sqrt(d)))/(2*a);
        printf("The roots are real & unequal. \nRoots are %.2f and %.2f\n", r1, r2);
    }

    else if (d<0)
    {
        r1=sqrt(-d);
        printf("The roots are imaginary.\nRoot1 = %.2f+i%.2f\nRoot2 = %.2f-i%.2f\n", (-b/(2*a)), (r1/(2*a)), (-b/(2*a)), (r1/(2*a)));
    }
    
}