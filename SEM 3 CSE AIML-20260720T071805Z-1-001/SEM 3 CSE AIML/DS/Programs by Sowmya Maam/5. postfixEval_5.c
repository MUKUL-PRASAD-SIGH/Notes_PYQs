#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define STACKSIZE 100

int stack[STACKSIZE];
int top=-1;

int pop()
{
    return stack[top--];
}

void push(int n)
{
    stack[++top] = n;
}


int result(int op1, int op2, char operator)
{
    switch(operator)
    {
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2;
        case '%':return op1%op2;
    }
}


int postfixEval(char *str)
{
    int i;
    int op1, op2;
    for(i=0;i<strlen(str);i++)
    {
        if(isdigit(str[i]))
        {
            push(str[i]-'0');
        }
        else
        {
            op2=pop();
            op1=pop();
            push(result(op1, op2, str[i]));
        }
    }
    return pop();//since top of the stack has the answer    
}

int main()
{
    char str[100];
    printf("Enter the Postfix Expression :\n");
    scanf("%s", str);

    printf("Result = %d\n", postfixEval(str));
    return 0;
}
