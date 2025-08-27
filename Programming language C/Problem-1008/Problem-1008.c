#include<stdio.h>
int main()
{
  int total_employee;
  float total_hour,per_HourMoney;
  scanf("%d",&total_employee);
  scanf("%f",&total_hour);
  scanf("%f",&per_HourMoney);

  printf("NUMBER = %d\n",total_employee);
  printf("SALARY = U$ %.2f\n",total_hour*per_HourMoney);
    return 0;
}
