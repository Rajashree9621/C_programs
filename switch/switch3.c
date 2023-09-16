#include <stdio.h>
int main()
{
    int celcius,fahrenheit,op,CF,FC;
    printf("enter the values of op :");
    scanf("%d",&op);

    switch(op)
    {
        case 1: 
               printf("fahrenheit");
               scanf("%d",&fahrenheit);
               CF=(fahrenheit-32)/1.8;
               printf("CF is : %d",CF);
               break;

        case 2:
               printf("Enter celcius");
               scanf("%d",&celcius);
               FC=(1.8*celcius)+32;
               printf("FC is : %d",FC);
               break;

        default:
               printf("not exist here.");

    }

}