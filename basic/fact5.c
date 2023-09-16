#include <stdio.h>
int fact1(void)
{
    int i,fact=1;
    printf("enter values:");
    scanf("%d",&fact);
    for(i=1;i<=fact;i++){
        fact=fact*i;
    }
    return fact;
    
}
int main()
{
    int fact;
    fact1();
    
}