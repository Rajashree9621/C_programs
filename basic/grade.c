#include <stdio.h>
int main()
{
int math,chem,bio,phy,comp;
float per;

printf("enter marks of subjects:");
scanf("%d%d%d%d%d",&math,&bio,&chem,&phy,&comp);

per = (phy + chem + bio + comp + math) / 0.5;

printf("Percentage = %.2f \n",per);

if(per>80)
{
    printf("grade A+");
}
else if(per>=65 && per<=80)
{
    printf("A");
}
else if(per>=50 && per<=65)
{
    printf("B");
}
else if(per>=42 && per<=50)
{
    printf("C");
}
else
{
    printf("fail");
}

return 0;
}
       