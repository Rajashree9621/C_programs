#include <stdio.h>

{
    int main()
    {
       int y;
       printf("Enter the year :");
       scanf("%d,&y");
    
       if(year%4==0) && ((year%400==0) || (year%100!==0))
         {
                 printf("%d Year is leap :",&y);
         }
      else 
        {
                 printf("%d Year is not leap :",&y);
        }
    
    return 0;
    }
}
