#include<stdio.h>
double Remainder(double a, double b)
{
    return((double)((int)a%(int)b));
}
double Quotient(double a, double b)
{
    return(a/b);
}
int main(void)
{
    double a, b;
    printf("Enter the two numbers: ");
    scanf("%lf %lf",&a,&b);
    printf("Remainder = %lf\tQuotient = %lf",Remainder(a,b),Quotient(a,b));
}