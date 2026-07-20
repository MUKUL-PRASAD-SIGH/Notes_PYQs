#include<stdio.h>

double add(double a, double b, double c)
{
    return (a+b+c);
}
int main(void)
{
    double a, b, c;
    printf("Enter the three numbers whose sum is to be found: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("The sum of the three numbers is %lf.",add(a,b,c));
}