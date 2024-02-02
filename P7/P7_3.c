#include<stdio.h>
void main()
{
    float n1, n2;
    char c;
    printf("Select an operator (+ - * /): ");
    scanf("%c", &c);
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    switch (c)
    {
    case '+':
        printf("%.1f + %.1f = %.1f\n", n1, n2, n1+n2);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f\n", n1, n2, n1-n2);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f\n", n1, n2, n1*n2);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f\n", n1, n2, n1/n2);
        break;
    default:
        printf("Error ! operator is not correct");
        break;
    }
}