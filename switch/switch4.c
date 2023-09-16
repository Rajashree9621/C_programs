#include<stdio.h>
int main()
{
    int n1,n2,add,sub,mult,div,ch;
    printf("enter the velues of n1 and n2 :");
    scanf("%d %d",&n1,&n2);

    switch(ch)
    {
        case 1:
                add=n1+n2;
                printf("add = %d",add);

        case 2:
                sub=n1-n2;
                printf("sub = %d",sub);

        case 3:
                mult=n1*n2;
                printf("mult = %d",mult);
        case 4:
                div=n1/n2;
                printf("div = %d",div);
        default:
                 printf("op not perform");

    }
}