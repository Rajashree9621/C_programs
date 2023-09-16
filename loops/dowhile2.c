#include<stdio.h>
int main()
{
    int fact=1,i=1,n;
    printf("\n enter the no:");
    scanf("%d",&n);
    do
    {
        fact=fact*i;
        i++;
    } 
    while(i<=10);
    printf("fact of %d is %d\n",n,fact);
       
}
