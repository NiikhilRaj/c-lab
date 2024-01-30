#include<stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if (c==65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117)
    {
        printf("The entered character '%c' is a vowel\n", c);
    }
    else if (96<c<123||64<c<91)
    {
        printf("The entered character '%c' is a consonant\n", c);
    }
    else
    {
        printf("The entered character'%c is not an alphabet\n", c);
    }
}