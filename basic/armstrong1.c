#include<stdio.h>
int main()
{
    int sum=0,n,r,temp;
    printf("enter the no: ");
    scanf("%d",&n);
     temp=n;
    do
    {
        r=n%10;
        sum=sum+r*r*r;
         n=n/10;
         
    } while (n!=0);
    if(temp==sum)
         {
            printf("armstrong no: %d",sum);
         }
         else{
            printf("not armstrong");
         }
    
    
}