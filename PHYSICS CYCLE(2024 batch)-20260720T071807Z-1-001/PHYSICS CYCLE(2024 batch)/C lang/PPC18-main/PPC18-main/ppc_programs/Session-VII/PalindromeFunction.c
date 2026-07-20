#include<stdio.h>

int Palindrome()
{
    int n, temp, d, rev = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        d = n%10;
        rev = (rev*10) + d;
        n/=10;
    }
    if(rev==temp)
    return 0;
    else 
    return -1;
}
int main(void)
{
    if(Palindrome()==0)
    printf("Number is palindrome.");
    else
    printf("Number is not palindrome.");
}