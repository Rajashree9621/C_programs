#include<stdio.h>
void arm(void)
{
    int num,r,temp,sum=0;
    printf("enter the value:");
    scanf("%d",&num);

    do{
        r=num%10;
        sum=sum+r;
        num = num/10;
     }  
     while(num!=0);
     {
        if(sum==temp)
        {
            printf("palindrome");
        }
        else{
            printf("not palindrome");
        }
     }
}
int main()
{
    arm();
}