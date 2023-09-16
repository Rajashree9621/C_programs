#include<stdio.h>
int main()
{
    int n,r,t,s=0;
    printf("enter the no: ");
    scanf("%d",&n);
    t=n;
    do
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;

    } while(n>0);
    {
        if(t==s)
        {
            printf("is palindrome %d",s);
        }
        else
        {
            printf("not palindrome:");
        }
    }
    
}