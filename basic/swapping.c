#include<stdio.h>
void op(int,int);

void op(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("%d%d\t",a,b);
    
}
int main()
{
    int x,y;
    printf("enter value:");
    scanf("%d%d",&x,&y);
    op(x,y);

}
