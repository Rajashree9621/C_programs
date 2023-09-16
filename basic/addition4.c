#include<stdio.h>

main()
{
    int ans;
    ans=add();
    printf(" enter the sum :%d",ans);
}
int add(void)
{
    int a,b,c;
    a=10,b=40;
    c=a+b;
    return c;
}