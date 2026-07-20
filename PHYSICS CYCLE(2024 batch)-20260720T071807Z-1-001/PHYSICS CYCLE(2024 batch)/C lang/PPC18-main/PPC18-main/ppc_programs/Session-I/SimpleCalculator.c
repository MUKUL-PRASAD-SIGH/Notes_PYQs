#include<stdio.h>

void SimpleCalc(char c, double a, double b)
{
    switch(c)
    {
        case '+':
        printf("Sum = %lf",a+b); break;
        case '-':
        printf("Difference = %lf",a-b); break;
        case '/':
        printf("Quotient = %lf",a/b); break;
        case '%':
        printf("Remainder = %lf",(double)((int)a%(int)b)); break;
        case '*':
        printf("Product = %d",a*b); break;
        default:
        printf("Invalid operator entered. ");
    }

}
int main(void)
{
    char c;
    double m, n; 
    printf("+ -> Addition\n- -> Subtraction\n/ -> Division\n* -> Multiplication\n%% -> Modulo\nEnter your choice (+,-,/,%%,*): ");
    scanf("%c",&c);
    printf("Enter the operands: ");
    scanf("%lf %lf",&m, &n);
    SimpleCalc(c,m,n);
}