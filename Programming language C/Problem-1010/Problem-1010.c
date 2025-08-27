#include<stdio.h>
int main()
{
    int product_code_1,product_code_2,numberOfproduct_1,numberOfproduct_2;
    float price_1,price_2,result;

    scanf("%d",&product_code_1);
    scanf("%d",&numberOfproduct_1);
    scanf("%f",&price_1);
    scanf("%d",&product_code_2);
    scanf("%d",&numberOfproduct_2);
    scanf("%f",&price_2);

    result=((numberOfproduct_1*price_1)+(numberOfproduct_2*price_2));
    printf("VALOR A PAGAR: R$ %.2f\n",result);

    return 0;
}
