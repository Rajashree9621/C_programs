#include<stdio.h>
int main()
{
    int n,sum=0,r,i;
    printf("enter the no. :");
    scanf("%d",&n);
    
       do
       {
            r=n%10;
            sum=sum+r;
            n=n/10;
            i++;

       } while(i<10);

       printf("sum of digits: %d",sum);
    
}