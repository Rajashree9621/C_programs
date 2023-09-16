#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,c;
    printf("enter any string: ");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
          i=strlen(str);
    }
    printf("\n length of string is : %d",i);

}