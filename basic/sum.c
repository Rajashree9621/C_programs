#include<stdio.h>
int main() 
    int m,n,sum=0;
    printf("Enter the number:");
    scanf("%d", &n);
    
    while(n>0)
    {
       m=n%10;
       sum=sum+m;
       n=n/10;
    }
    
    printf("%d",sum);
    return 0;
}