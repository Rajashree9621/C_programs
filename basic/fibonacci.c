#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter the no: ");
    scanf("%d",&n);
    do {
        
           c=a+b;
           //printf("%d",c);
           a=b;
           b=c;
       }while(n>0);

      printf("the fibonacci series is:%d ",c);

}