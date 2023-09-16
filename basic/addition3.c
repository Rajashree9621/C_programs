#include<stdio.h>
void add(int,int);
main()
{
    int a,b;
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    add(a,b);
}
    void add(int x,int y)
{
    printf("addition=%d",x+y);
}