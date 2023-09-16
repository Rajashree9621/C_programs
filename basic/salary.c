#include <stdio.h>

int main()
{
    float basic_sal,DA,HR,PF,TA,gross_sal,net_sal;
    printf(" enter basic salary: ");
    scanf("%f",&basic_sal);

    DA= 0.4 * basic_sal;
    HR= 2.5 * basic_sal;
    PF= 0.2 * basic_sal;
    TA= 0.3 * basic_sal;

    gross_sal = basic_sal+DA+HR+TA;
    net_sal = gross_sal-PF;

    printf("\n Basic Salary: %f",basic_sal);
    printf("\n DA: %f",DA);
    printf("\n HR: %f",HR);
    printf("\n PF: %f",PF);
    printf("\n TA: %f",TA);
    printf("\n gross salary: %f",gross_sal);
    printf("\n net salary: %f",net_sal);

    
    return 0;

}