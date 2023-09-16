#include<stdio.h>
int prime(void);
int main()
{
    int n,count=0,i,c;
    printf("enter value:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("is prime");

    }
    else{
        printf("not prime:");
    }
}