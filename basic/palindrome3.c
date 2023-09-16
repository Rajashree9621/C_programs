#include<stdio.h>
int palindrome(void)
{
    int num,r,temp,sum=0;
    printf("enter the value:");
    scanf("%d",&num);

    r=num%10;
    sum=sum+r;
    num=num/10;
    if(sum!=temp)
    {
        printf("palindrome");
    }
    else
        printf("not palindrome");
}

int main()
{
    palindrome();
}
