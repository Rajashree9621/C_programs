#include <stdio.h>
/*unsigned int fact(unsigned int n)

{
    if(n==0)
       return 1;
    return n* fact(n-1);   
}*/
int main()
{
    int num =4,i;
    static int fact=1;
    //printf("factorial of %d is %d",num,fact(num));
    for ( i = 1; i<=num; i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",num,fact);
}
