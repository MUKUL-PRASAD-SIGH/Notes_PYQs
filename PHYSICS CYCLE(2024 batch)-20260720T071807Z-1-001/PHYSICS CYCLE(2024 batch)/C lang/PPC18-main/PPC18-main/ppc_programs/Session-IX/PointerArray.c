#include<stdio.h>
int main(void)
{
    int n, i, sum = 0;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
        sum += *(a+i);
    }
    printf("Sum of the array elements: %d",sum);
}