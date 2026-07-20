#include<stdio.h>

void GCDLCM(int a, int b)
{
    int temp, i;
    if(a>b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    for(i=a;i>=1;i--)
    {
        if(b%i==0 && a%i==0)
        break;
    }
    printf("GCD = %d",i);
    for(i=b;i<=a*b;i++)
    {
        if(i%a==0 & i%b==0)
        break;
    }
    printf("\tLCM = %d",i);
}
int main(void)
{
    int m, n;
    printf("Enter the two numbers whose LCM and GCD is to be found: ");
    scanf("%d %d",&m, &n);
    GCDLCM(m,n);
}