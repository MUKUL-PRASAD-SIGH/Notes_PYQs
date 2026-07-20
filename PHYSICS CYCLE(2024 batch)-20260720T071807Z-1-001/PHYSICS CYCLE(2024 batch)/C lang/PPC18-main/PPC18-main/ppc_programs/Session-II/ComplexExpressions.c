#include<stdio.h>
#include<math.h>

int main(void)
{
    double S, u, a, t, v;
    printf("Enter the value u, t, and a: ");
    scanf("%lf %lf %lf",&u, &t, &a);
    S = u*t + 0.5*a*pow(t,2.0);
    printf("The value of S is %lf.",S);
    printf("\nEnter the value of v, a, S: ");
    scanf("%lf %lf %lf",&v,&a,&S);
    u = sqrt(pow(v,2)-(2*a*S));
    printf("The value of u is %lf.",u);
}