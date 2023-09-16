#include <stdio.h>

int main()
{
    int a,b,c,d,n,f,x,s,y,g,k;
    printf("enter 4 digits::");
    scanf("%d",&n);

    f=n/1000;
    x=n%1000;
    s=x/100;
    y=x%100;
    g=y/10;
    k=y%10;

    rev=k*1000+g*100+s*10+f;
    printf("\n reverce no.. %d",rev);
    return 0;
}