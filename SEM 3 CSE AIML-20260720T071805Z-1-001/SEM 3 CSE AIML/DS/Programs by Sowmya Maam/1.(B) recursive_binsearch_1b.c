#include<stdio.h>
#define compare(a,b) ((a)>(b) ? (1) : ((a)==(b) ? (0) : (-1)))

int bin_search(int a[],int key,int left,int right)
{
	int middle;
	if(left<=right)
	{
		middle = (left+right)/2;
		switch(compare(a[middle],key))
		{
        		case -1 :
                		return bin_search(a,key,middle+1,right);
        		case 0 :
                		return middle;
        		case 1:
                		return bin_search(a,key,left,middle-1);
		}
	}
	else
		return -1;
}

int main()
{

       	int n, a[20], i, key, result;
	printf("enter the number of elements of array\n");
        scanf("%d",&n);
        printf("enter the array elements\n");
        for(i=0;i<n;i++)
        	scanf("%d",&a[i]);
	printf("enter the key to be searched\n");
	scanf("%d", &key);

	result = bin_search(a,key,0,n-1);
	if(result == -1)
		printf("%d not found in the array\n", key);
	else
		printf("%d found at location %d\n",key,result+1);
}
