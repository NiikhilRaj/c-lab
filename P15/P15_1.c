#include<stdio.h>
void capital()
{
    for (int i = 65; i < 91; i++)
    {
        printf("%c", i);
    }
    
}
void small(){
    for (int i = 97; i < 123; i++)
    {
        printf("%c", i);
    }
    printf("\n");
}
void main()
{
    capital();
    small();
}