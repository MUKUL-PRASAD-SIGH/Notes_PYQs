#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    return 1;
    else if(n>=1)
    return n*factorial(n-1);
}
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Factorial of the number is %d.",factorial(num));
}