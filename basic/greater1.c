#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("enter five no:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                {
                    printf("a is greater");
                }
            }
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            if(b>d)
            {
                if(b>e)
                {
                    printf("b is greater");
                }
            }
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            if(c>d)
            {
                if(c>e)
                {
                    printf("c is greater");
                }
            }
        }
    }
    if(d>a)
    {
        if(d>b)
        {
            if(d>c)
            {
                if(d>e)
                {
                    printf("d is greater");
                }
            }
        }
    }
    else
    {
        printf("e is greater");
    }

}    