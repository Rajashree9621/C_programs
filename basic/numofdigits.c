#include <stdio.h>

int main()
{
    //long long n;
    int n=20901;
    int count=0;
    //printf("enter integer: ");
    //scanf("%lld",&n);

    //do
  //  {
   //     n/=10;
       // ++count;
    //}
   // while (n!=0);
   while(n>0)
   {
    count++;
    n=n/10;
   }
    printf("no. of digits: %d",count);
    
}