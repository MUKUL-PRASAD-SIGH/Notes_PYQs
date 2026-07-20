#include<stdio.h>
#define compare(a,b) ((a)>(b) ? (1) : ((a)==(b) ? (0) : (-1)))

int bin_search(int a[],int key,int n)
{
	int mid;
	int low = 0;
	int high = n-1;
	while(low<=high)
	{
		mid = (low+high)/2;
		switch(compare(a[mid],key))
		{
        		case -1 : low = mid+1;
				  break;
			case 1:
                		high = mid-1;
				   break;
        		case 0 :
                		return mid;
        		
		}
	}
	
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

	result = bin_search(a,key,n);
	if(result == -1)
		printf("%d not found in the array\n", key);
	else
		printf("%d found at location %d\n",key,result+1);
}
