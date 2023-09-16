#include <stdio.h>

int main()
{
    int n1,n2;
    char op;
    float res;

    printf("select an operator(+,-,*,/)to perform calculator:\n");
    scanf("%c",&op);

    printf("enter first no. ");
    scanf("%d",&n1);

    printf("enter second no. ");
    scanf("%d",&n2);

    if(op=='+')
    {
        res=n1+n2;
        printf("addition %d %d : %f",n1,n2,res);
    }
    else if(op='-')
    {
        res=n1-n2;
        printf("substraction %d %d : %f",n1,n2,res);
    }
    else if(op='*')
    {
        res=n1*n2;
        printf("mult of  %d %d : %f",n1,n2,res);
    }
    else if(op='/')
    {
        res=n1/n2;
        printf("devide of %d %d : %f",n1,n2,res);
    }
    else
    {
        printf("\n entered wrong input:");
    }

}