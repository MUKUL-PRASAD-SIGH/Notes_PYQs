#include<stdio.h>
int d, sum = 0, num = 0;
int DigitNum(int n)
{
    while(n>0)
    {
        d = n%10;
        num++;
        n = n/10;
    } 
    return num;
}
int DigitSum(int n)
{
    while(n>0)
    {
        d = n%10;
        sum += d;
        n = n/10;
    }
    return sum;
}
int main(void)
{
    int k;
    printf("Enter the number: ");
    scanf("%d",&k);
    printf("Sum of digits = %d\tNumber of digits = %d",DigitSum(k),DigitNum(k));    
}