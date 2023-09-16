#include<stdio.h>
#include<string.h>
int main()
{
   //// char a[50]="Rajashree";
    //char b[50]="Patil";
    

   // strcat(a,b);
   // printf("Concatination string is:%s\t",a);
    //strlen(a);
    //return 0;

    char a[50]="Rajashree";
    //char b[50]="Patil";
    printf("length of str:%d\n",strlen(a));
    printf("size of string: %d\n",sizeof(a));
    printf("reverce string is:%s",strrev(a));
}