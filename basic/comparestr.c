#include<stdio.h>
int main()
{
    char a[100],b[100];
    
    printf("enter first string");
    gets(a);
    printf("enter second string");
    gets(b);
    printf("value of string= %d",strcmp(a,b)); 
}