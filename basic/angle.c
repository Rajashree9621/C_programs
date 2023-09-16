#include <stdio.h>

int main()
{
    int a,b,angle;
    printf("enter angle:");
    scanf("%d %d",&a,&b);

    angle=180-(a+b);
    printf("ThirdAngle= %d",angle);
}