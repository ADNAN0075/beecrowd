#include<stdio.h>
int main()
{
    char name[10];
    double salary,commition,total_salary;
    scanf("%s",&name);
    scanf("%lf",&salary);
    scanf("%lf",&commition);

    total_salary= salary+((commition*15)/100);

    printf("TOTAL = R$ %.2lf\n",total_salary);

    return 0;

}
