#include <stdio.h>
int main()
{
    int com,SA;
    printf("enter SA values:",SA);
    scanf("%d",&SA);

    if(SA>1000)
    {
        com=SA*0.15;
        printf("commission is: %d",com);
    }
    else
    {
        printf("sale ammount is not greater than 1000");
    }
}