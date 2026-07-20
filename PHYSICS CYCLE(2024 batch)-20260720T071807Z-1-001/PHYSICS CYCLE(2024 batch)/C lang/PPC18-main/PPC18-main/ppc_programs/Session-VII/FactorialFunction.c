#include<stdio.h>

int factorial(int n)
{
    int i, f = 1;
    for(i=1;i<=n;i++)
    f *= i;
    return f;
}
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Factorial of the number is %d.",factorial(num));
}