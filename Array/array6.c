#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum=0;
    printf("enter the elements:");

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
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            if((i==1 && j==0) || (i==1 && j==2))
            {
                continue;
                sum+=a[i][j];
            }

        }
        printf("%d ",sum);
     }

}