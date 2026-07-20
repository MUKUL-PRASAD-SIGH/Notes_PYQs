#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

double Fahrenheit(double Celsius)
{
    return ((9.0/5.0)*Celsius)+32.0;
}
double Celsius(double Fahrenheit)
{
    return (5.0/9.0)*(Fahrenheit-32.0);
}
int main(void)
{
    int c; 
    double C = 0, F = 0;
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter your choice (1,2): ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
            printf("Enter the temperature in Celsius: ");
            scanf("%lf",&C);
            printf("Temperature in Fahrenheit: %lf",Fahrenheit(C));
            break;
        }
        case 2:
        {
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%lf",&F);
            printf("Temperature in Celsius: %lf",Celsius(F));
            break;
        }
        default: 
        {
            printf("Invalid choice! Program terminates. ");
            exit(0);
        }
    }
}