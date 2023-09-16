#include <stdio.h>

int main()
{
    int num;
    printf("enter no: ");
    scanf("%d",&num);

    if(num%2==0)
    printf("no. is even");
    else
    {
        printf("no. is odd");
    }
}