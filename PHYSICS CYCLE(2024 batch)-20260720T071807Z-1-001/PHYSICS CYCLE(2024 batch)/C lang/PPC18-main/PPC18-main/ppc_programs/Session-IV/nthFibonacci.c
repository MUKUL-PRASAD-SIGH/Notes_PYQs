#include<stdio.h>

int nFib(int n)
{
    if(n==1 || n==2)
    return (n-1);
    else 
    return (nFib(n-1)+nFib(n-2));
}
int main(void)
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The nth member of the Fibonacci series is %d.",nFib(n));
}