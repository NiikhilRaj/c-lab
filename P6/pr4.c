#include<stdio.h>
void main()
{
    int n;
    printf("Enter the weekday: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("This is Monday\n");
        break;
    case 2:
        printf("This is Tuesday\n");
        break;
    case 3:
        printf("This is Wednesday\n");
        break;
    case 4:
        printf("This is Thursday\n");
        break;
    case 5:
        printf("This is Friday\n");
        break;
    case 6:
        printf("This is Saturday\n");
        break;
    case 7:
        printf("This is Sunday\n");
        break;
    default:
        printf("Error ! enter a valid weekday\n");
        break;
    }
}