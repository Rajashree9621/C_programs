#include <stdio.h>

int main()
{
    int a,i=2,c=0;
    printf("enter the no:");
    scanf("%d",&a);

    while (i<=a)
    {
        if(a%i==0)
        {
            c++;
        }
        i++;
    }
    if(c==1)
            printf("%d is prime no.",a);
    else
            printf("%d is not prime no.",a);        
    
}