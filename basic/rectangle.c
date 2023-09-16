#include <stdio.h>

int main()
{
    int l,b,perimeter_of_rect,area;
    printf("enter length and breadth: ");
    scanf("%d%d",&l,&b);

    perimeter_of_rect=(2*(l+b));
    printf("perimeter of rectangle is: %d",perimeter_of_rect);

    area=l*b;
    printf("\narea of rectangle is: %d",area);
}