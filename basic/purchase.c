#include <stdio.h>

int main()
{
    int TA,PA,discount=200;
    printf("enter PA: ");
    scanf("%d",&PA);

    if(PA>1500)
    {
        TA=PA-discount;
        printf("TA :%d",TA);
    }
    else
    {
        printf("TA %d",PA);
    }
}