#include<stdio.h>
int main()
{
    for(int i=0;i<=5;i++)
    {

       for(int k=5;k>=i;k--)
       {
         printf(" ");
       }

          for(int j=1;j<=i;j++){
             printf(" A");
          }
          printf("\n ");
           
    }
    
    for(int i=0;i<=5;i++)
    {

       for(int k=1;k<=i;k++)
       {
         printf(" ");
       }

          for(int j=5;j>=i;j--){
             printf(" A");
          }
          printf("\n ");
           
    }
      

   
}
