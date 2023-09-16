#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter the elements: ");

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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j || (i+j==2))
            {
                sum+=a[i][j];
            }
        }      
    }
    printf("%d",sum);
}