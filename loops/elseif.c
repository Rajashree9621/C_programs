#include <stdio.h>

int main()
{
    int num;
    printf("enter the no: ");
    scanf("%d",&num);

    if(num%8==0 && num%5==0)
    {
        printf("no. is divisible by 8 and 5");
    }
    else if(num%8==0)
    {
        printf("no. is divisible by 8");
    }
    else if(num%5==0)
    {
        printf("no. is divisible by 5");
    }
    else
    {
        printf("no. is divisible neither by 8 nor by 5");
    }
}