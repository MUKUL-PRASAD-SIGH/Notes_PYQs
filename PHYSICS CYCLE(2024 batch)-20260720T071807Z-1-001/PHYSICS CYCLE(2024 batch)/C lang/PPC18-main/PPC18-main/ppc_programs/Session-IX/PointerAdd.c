#include<stdio.h>
int main(void)
{
    int x, y, *a, *b;
    a = &x;
    b = &y;
    printf("Enter the value of x and y: ");
    scanf("%d %d",a,b);
    printf("The Sum of x and y is %d",*a+*b);
}