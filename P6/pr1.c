#include<stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet:");
    scanf("%c", &c);
    if (96<c<123)
    {
        c = c-32;
        printf("The upercase for the entered letter is'%c'\n", c);
    }
    
    else if (64<c<91)
    {
        printf("You have entered '%c' which is already in uppercase\n", c);
    }
    else 
    {
        printf("Enter a valid alphabet\n");
    }
    
}
