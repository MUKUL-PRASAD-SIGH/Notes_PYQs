#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

#define COMPARE(x,y)  (((x) < (y)) ? -1: ((x) == (y)) ? 0 : 1)

typedef struct polyNode* polyPtr;

typedef struct polyNode
{
	int coef;
	int expon;
	polyPtr link;
} polyNode;

polyPtr headA, headB, headC;


void attach(int c, int e, polyPtr *ptr)
{
	polyPtr temp;
	temp=(polyPtr)malloc(sizeof(polyNode));
	temp->coef = c;
	temp->expon = e;
	(*ptr)->link= temp;
	*ptr = temp;
}


void cpadd(polyPtr a, polyPtr b)
{
	polyPtr startA, lastC;
	int sum, done=FALSE;
	startA = a;
	a= a->link;
	b= b->link;
	headC= (polyPtr) malloc(sizeof(polyNode));
	headC->expon = -1;
	lastC=headC;
	do
	{
		switch(COMPARE(a->expon, b->expon))
		{
			case -1: attach(b->coef, b->expon, &lastC);
					 b=b->link;
					 break;
			case 0: if(startA == a) done = TRUE;
					else
					{
						sum= a->coef + b->coef;
						if(sum) attach(sum, a->expon, &lastC);
						a=a->link;
						b=b->link;
					}
					break;
			case 1: attach(a->coef, a->expon, &lastC);
					a=a->link;
					break;
		}
	} while(!done);
	lastC->link = headC;
}

int main()
{
		polyPtr lastA, lastB, temp, start;
		int c, e, i, n;
		headA = (polyPtr) malloc(sizeof(polyNode));
		headB = (polyPtr) malloc(sizeof(polyNode));
		headA->expon = -1;
		headB->expon = -1;
		lastA=headA;
		lastB=headB;
		printf("How many terms in polynomial A\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter the coef & exponent\n");
			scanf("%d%d", &c, &e);
			attach(c,e,&lastA);
		}
		lastA->link=headA;
		printf("How many terms in polynomial B\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter the coef & exponent\n");
			scanf("%d%d", &c, &e);
			attach(c,e,&lastB);
		}
		lastB->link=headB;
		cpadd(headA,headB);

		printf("\nPolynomial A is:\n");
	
		for(start= headA->link ;start != headA; start=start->link)
			printf("%d *x%d + ",start->coef, start->expon);

		printf("\nPolynomial B is:\n");
	
		for(start= headB->link ;start != headB; start=start->link)
			printf("%d *x%d + ",start->coef, start->expon);

		printf("\nSum Polynomial is:\n");
	
		for(start= headC->link ;start != headC; start=start->link)
			printf("%d *x%d + ",start->coef, start->expon);
		printf("\n\n");

	for(start= headA->link ;start != headA; start=start->link)
		free(start);
		free(headA);
	for(start= headB->link ;start != headB; start=start->link)
		free(start);
		free(headB);
	for(start= headC->link ;start != headC; start=start->link)
		free(start);
		free(headC);
	return 0;
}

