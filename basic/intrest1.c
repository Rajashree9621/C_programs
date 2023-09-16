#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the values");
    scanf("%d%d%d",&x,&y,&z);
    op(x,y,z);
}
    void op(int,int,int);
    void op(int p, int r,int t)
    {
    int SI;
    SI=p*r*t/100;
    printf("%d",SI);
}