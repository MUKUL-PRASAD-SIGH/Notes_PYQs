#include<stdio.h>

void Prime()
{
    int i, n, flag = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        flag++;
    }
    if(flag==1)
    printf("Number is prime.");
    else 
    printf("Number is composite. ");
}

int main(void)
{
    Prime();
}