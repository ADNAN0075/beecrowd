#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    double Pi= 3.14159;
    double result;
    scanf("%d",&r);
    result= (4.0/3)*Pi*pow(r,3);

    printf("VOLUME = %.3f\n",result);

    return 0;
}
