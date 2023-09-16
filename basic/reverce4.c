#include<stdio.h>
int rev(int);
int main(){
    int a,c;
    printf("enter reverce order:");
    scanf("%d",&a);
    c=rev(a);
    printf("%d",c);
    
}


int rev(int x)
{
    int r,sum=0;

    while(x!=0)
    {
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
    }
    return sum;
}