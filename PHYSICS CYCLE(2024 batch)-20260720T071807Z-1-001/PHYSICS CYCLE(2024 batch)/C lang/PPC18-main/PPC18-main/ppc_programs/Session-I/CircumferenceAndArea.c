#include<stdio.h>
#include<math.h>
#define PI 3.14159265

double Area(double r)
{
    return(PI*pow(r,2.0));
}
double Circumference(double r)
{
    return(2*PI*r);
}
int main(void)
{
    double rad;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&rad);
    printf("The Area = %lf sq. units\tThe Circumference = %lf units",Area(rad),Circumference(rad));
}