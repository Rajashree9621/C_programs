#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e'||ch=='A'||ch=='I'||ch=='O'||ch=='U'||ch=='E')
    {
        printf("ch is vowel");
    }
    else
    {
        printf("ch is consonent");
    }
}