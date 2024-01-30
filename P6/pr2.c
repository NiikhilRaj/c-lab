#include<stdio.h>
void main()
{
    int m;
    printf("Enter the marks secured: ");
    scanf("%d", &m);
    if (m<=100 && m>=90)
    {
        printf("Secured grade is O\n");
    }
    else if (m<=89 && m>=80)
    {
        printf("Secured grade is A\n");
    }
    else if (m<=79 && m>=70)
    {
        printf("Secured grade is B\n");
    }
    else if (m<=69 && m>=60)
    {
        printf("Secured grade is C\n");
    }
    else if (m<=59 && m>=50)
    {
        printf("Secured grade is D\n");
    }
    else if (m<=49 && m>=40)
    {
        printf("Secured grade is E\n");
    }
    else if (m<40 )
    {
        printf("Secured grade is F\n");
    }
}