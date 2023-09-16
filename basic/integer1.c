#include <stdio.h>

int main()
{
    int n,count=0;
    printf("enter the no. ");
    scanf("%d",&n);

    while(n>0)
   {
    count++;
    n=n/10;
   }
    printf("no. of digits: %d",count);
}