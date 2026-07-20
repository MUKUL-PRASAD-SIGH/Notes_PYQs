#include<stdio.h>
int* SelectionSort(int* arr, int n)
{
    int i, j, smallest, temp;
    for(i=0;i<n;i++)
    {
        smallest = i;
        for(j=i+1;j<n;j++)
        {
            if(*(arr+j)<*(arr+smallest))
            smallest = j;
        }
        temp = *(arr+smallest);
        *(arr+smallest) = *(arr+i);
        *(arr+i) = temp;
    }
    return arr;
}
int* BubbleSort(int* arr, int l)
{
    int i, j, temp;
    for(i=0;i<l;i++)
    {
        for(j=l-1;j>i;j--)
        {
            if(arr[j-1]>arr[j])
            {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}
int main(void)
{
    int l;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&l);
    int a[l];
    printf("Enter the elements of the array: ");
    for(int i=0;i<l;i++)
    {
        scanf("%d",(a+i));
    }
    printf("The Sorted Array: ");
    int* as = BubbleSort(a,l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",*(as+i));
    }
}