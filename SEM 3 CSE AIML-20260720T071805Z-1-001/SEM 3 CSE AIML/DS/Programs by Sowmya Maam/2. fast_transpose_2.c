#include<stdio.h>

typedef struct
{
		int r,c,v;
} term;

void transpose(term a[],term t[])
{
	int rt[10],sp[10];
	int i,j,numcols=a[0].c,numterms=a[0].v;
	t[0].r=numcols;
	t[0].v=numterms;
	t[0].c=a[0].r;
	if(numterms>0)
	{
		for(i=0;i<numcols;i++)
			rt[i]=0;
		for(i=1;i<=numterms;i++)
			rt[a[i].c]++;
		sp[0]=1;
		for(i=1;i<numcols;i++)
			sp[i]=sp[i-1]+rt[i-1];
		for(i=1;i<=numterms;i++)
		{
				j=sp[a[i].c]++;
				t[j].r=a[i].c;
				t[j].c=a[i].r;
				t[j].v=a[i].v;
		}
	}
	
}

int main()
{
	term a[10],t[10];
	int i;
	printf("\nEnter the number of rows and columns\n");
	scanf("%d%d",&a[0].r,&a[0].c);
	printf("\nEnter the number of values\n");
	scanf("%d",&a[0].v);
	for(i=1;i<=a[0].v;i++)
	{
		printf("\nEnter %dth row, column and element values\n",i);
		scanf("%d%d%d",&a[i].r,&a[i].c,&a[i].v);
	}
	printf("\nOriginal Matrix\n");
	for(i=1;i<=a[0].v;i++)
		printf("%d\t%d\t%d\n",a[i].r,a[i].c,a[i].v);
	transpose(a,t);
	printf("\nTranspose Matrix\n");
	for(i=1;i<=t[0].v;i++)
		printf("%d\t%d\t%d\n",t[i].r,t[i].c,t[i].v);
	return 0;
}
