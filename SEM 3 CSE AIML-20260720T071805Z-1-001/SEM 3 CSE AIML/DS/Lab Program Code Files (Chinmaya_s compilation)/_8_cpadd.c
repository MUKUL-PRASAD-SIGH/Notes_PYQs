#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define compare(a,b) ((a<b)?-1:(a==b)?0:1)

#define true 1
#define false 0

struct node{
    int coef;
    int exp;
    struct node * link;
};

struct node * headA, * headB, * headC;

void attach(int c, int e , struct node ** ptr){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->coef=c;
    temp->exp=e;
    (*ptr)->link=temp;
    (*ptr)=temp;
}

void cpadd(struct node * a, struct node * b){
    struct node * lastC,* startA;
    int sum,done=false;
    headC = (struct node *)malloc(sizeof(struct node));
    headC->exp=-1;
    startA=a;
    a=a->link;
    b=b->link;
    lastC=headC;
    do{
        switch(compare(a->exp,b->exp)){
            case -1 : attach(b->coef,b->exp,&lastC);
                      b=b->link;
                      break;
            case 0 : if (startA==a) done = true;
                     else{
                        sum=a->coef + b->coef;
                        if(sum){
                            attach(sum,a->exp,&lastC);
                            a=a->link;
                            b=b->link;
                        }
                     }
                     break;
            case 1 : attach(a->coef,a->exp,&lastC);
                     a=a->link;
                     break;
        }
    }while(!done);
    lastC->link=headC;
}

void main(){
    struct node * lastA, * lastB, * start,* temp;
    int c,e,i,n;
    headA = (struct node *)malloc(sizeof(struct node));
    headB = (struct node *)malloc(sizeof(struct node));
    headA->exp = headB->exp=-1;
    lastA = headA;
    lastB = headB;
    printf("Enter the terms in polynomial A: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the each terms: (coef,exp): ");
        scanf("%d%d",&c,&e);
        attach(c,e,&lastA);
    }
    lastA->link=headA;
    printf("Enter the terms in polynomial B: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the each terms: (coef,exp): ");
        scanf("%d%d",&c,&e);
        attach(c,e,&lastB);
    }
    lastB->link=headB;
    cpadd(headA,headB);
    printf("\nThe Polynomial A : ");
    for(start=headA->link;start!=headA;start=start->link){
        printf("%d * x ^ %d + ",start->coef,start->exp);
    }
    printf("\nThe Polynomial B : ");
    for(start=headB->link;start!=headB;start=start->link){
        printf("%d * x ^ %d + ",start->coef,start->exp);
    }
    printf("\nThe Polynomial C = A + B : ");
    for(start=headC->link;start!=headC;start=start->link){
        printf("%d * x ^ %d + ",start->coef,start->exp);
    }

}