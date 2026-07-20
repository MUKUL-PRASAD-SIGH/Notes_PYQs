#include<stdio.h>
int BinarySearch(int* arr, int l, int key)
{
    int low = 0, high = l-1, mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(key==mid)
        {
            break;
        }
        else if(key<mid)
        {
            high = mid-1;
        }
        else if(key>mid)
        {
            low = mid+1;
        }
    }        
    return mid;
}
int main(void)
{
    int l, ele;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&l);
    int a[l];
    printf("Enter the elements of the array in sorted order: ");
    for(int i=0;i<l;i++)
    {
        scanf("%d",(a+i));
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&ele);
    printf("The key element is found at index %d of the array",BinarySearch(a,l,ele));
}