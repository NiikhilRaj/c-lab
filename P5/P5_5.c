#include<stdio.h>
void main()
{
    float bp, mp, dis, sp, per;
    printf("Enter the buying price: ");
    scanf("%f", &bp);
    printf("Enter the selling price: ");
    scanf("%f", &mp);
    printf("Enter the discount percetage: ");
    scanf("%f", &dis);
    sp = mp - (mp*(dis/100));
    per = ((sp-bp)/bp)*100.0;
    if (per>0)
    {
        
        printf("Seller made a profit of: %.2f\n", per);
    }
    else if (per<0)
    {
    
        printf("Seller amde a loss of: %.2f\n", -per);
    }
}
