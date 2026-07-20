#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
    double a, b, c;
    double r1, r2;
    printf("Enter the coefficients of the Quadratic Equation a, b and c (a is not equal to zero): ");
    scanf("%lf %lf %lf",&a,&b,&c);
    double D = pow(b,2) - 4*a*c;
    if(a==0)
    {
        printf("Equation is linear. Program terminates.");
        exit(0);
    }
    if(D>=0)
    {
        r1 = (-b-sqrt(D))/(2*a); 
        r2 = (-b+sqrt(D))/(2*a); 
        printf("The roots are: %lf and %lf.",r1,r2);              
    }
    else if(D<0)
    {
        double real = -b/(2*a);
        double imag = sqrt(-D)/(2*a);
        printf("The roots are: (%lf) - (%lf)i and (%lf) + (%lf)i.",real,imag,real,imag);
    }
}