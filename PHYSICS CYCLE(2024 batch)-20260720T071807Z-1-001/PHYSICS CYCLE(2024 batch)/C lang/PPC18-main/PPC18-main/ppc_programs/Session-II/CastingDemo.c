#include<stdio.h>
int main(void)
{
    int a; float b;
    printf("Enter a float value: ");
    scanf("%f",&b);
    printf("Enter an integer value: ");
    scanf("%d",&a);
    printf("Their sum (Implicit casting of integer to float) is %lf",(a+b));
    printf("\nTheir sum casted to integer (Explicit type casting) is %d",(int)(a+b));    
}