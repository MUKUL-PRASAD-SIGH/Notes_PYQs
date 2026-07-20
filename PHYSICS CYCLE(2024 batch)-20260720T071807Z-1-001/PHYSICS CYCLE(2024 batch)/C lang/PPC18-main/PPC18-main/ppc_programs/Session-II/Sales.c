#include<stdio.h>
double sales(int quantity, double unitprice, double discountrate, double taxrate)
{
    double sales;
    sales = quantity*unitprice;
    double tax = (taxrate/100)*sales;
    double discount = (discountrate/100)*sales;
    sales = sales - discount + tax;
    return sales;
}
int main(void)
{
    double q, up, dr, tr;
    printf("Enter the quantity, unit price, discount rate and tax rate in order: ");
    scanf("%lf %lf %lf %lf",&q,&up,&dr,&tr);
    printf("The total sales in INR is %lf.",sales(q,up,dr,tr));
}