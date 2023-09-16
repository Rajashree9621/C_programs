#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter elements: ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                printf("\t%d",a[i][j]);
            }
          printf("\n");  
        }
        
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if((i+j==1) || (i+j==3))
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("sum= %d",sum);
    }
