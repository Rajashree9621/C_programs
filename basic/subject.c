#include <stdio.h>

int main()
{
    int comp,phy,math,chem,bio,total,avg;
    printf("enter marks:");
    scanf("%d%d%d%d%d",&comp,&phy,&math,&chem,&bio);

    total= comp+phy+math+chem+bio;
    avg= total/0.5;

    printf("total : %d",total);
    printf("\navg %d",avg);

}