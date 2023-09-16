#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("\n enter the string");
    scanf("%d",&str);

    for(i=0;str[i]!=0;i++)
    {
        printf("%s",str[i]);
        
    }
}