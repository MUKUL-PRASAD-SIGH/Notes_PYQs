#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int data){
    stack[++top]=data;
}

int pop(){
    return stack[top--];
}

int result(int op1, int op2 , char operator){
    switch(operator){
        case '+' : return op1+op2;
        case '-' : return op1-op2;
        case '/' : return op1/op2;
        case '%' : return op1%op2;
        case '*' : return op1*op2;
    }
}

int postfixeval(char * str){
    int op1,op2;
    for(int i = 0;i<strlen(str);i++){
        if(isdigit(str[i])){
            push(str[i]-'0');
        }
        else{
            op2=pop();
            op1=pop();
            push(result(op1,op2,str[i]));
        }
    }
    return pop();
}

void main(){
    char str[100];
    printf("Enter the postfix term: ");
    scanf("%s",str);
    printf("after evaluation result = %d\n",postfixeval(str));
}