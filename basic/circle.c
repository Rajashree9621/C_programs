#include <stdio.h>

int main()
{
    int circumference_of_circle,pi=3.14,r,area;

    printf("enter r:: ");
    scanf("%d",&r);

    circumference_of_circle=2*pi*r;
    printf("circumference of circle: %d",circumference_of_circle);

    area=pi*r*r;
    printf("\narea of circle is : %d",area);
}