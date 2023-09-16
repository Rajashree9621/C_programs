#include <stdio.h>

int main()
{
    int order,stock=100;
    char credit;

    printf("Enter customer order: ");
    scanf("%d"&order);

    printf("Is his credit ok? \n");

    if(order<=stock && credit=='y' || credit=='Y')
    printf("supplied requirement : %d",order);

    else if(order>stock && credit == 'y' || credit =='Y')
    printf("product and balance will be shipped later.",stock);

    else
    printf("Please first clear your credit,until we cant supply you any more.");
}