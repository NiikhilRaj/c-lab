#include<stdio.h>
void main()
{
    int grade, fail;
    printf("ENter class and no of fail: ");
    scanf("%d %d", &grade, &fail);
    switch (grade)
    {
        case 1:
        if (fail<=3)
        {
            printf("Grace is 5 marks per subject");
        }
        else
        {
            printf("NO grace");
        }
        
        break;
        case 2:
        if (fail<=2)
        {
            printf("Grace is 4 marks per subject");
        }
        else
        {
            printf("No Grace");
        }
        break;
        case 3:
        if (fail<=1)
        {
            printf("Grace is 5 marks per subject");
        }
         else
         {
            printf("NO grace");
         }
         break;
        default:
        printf("enter a valid class");
        break;
    }
}