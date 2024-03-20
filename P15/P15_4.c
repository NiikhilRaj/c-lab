#include<stdio.h>
void count(int a){
    int count=0;
    while (a>0)
    {
        if (a/10!=0)
        {
            count++;
            a/=10;
        }
        
    }
    
}
void main()
{
    
}