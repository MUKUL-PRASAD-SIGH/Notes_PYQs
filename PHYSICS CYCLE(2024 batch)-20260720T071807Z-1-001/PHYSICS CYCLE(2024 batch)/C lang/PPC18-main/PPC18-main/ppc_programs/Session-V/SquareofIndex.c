#include<stdio.h>
void SquareIndex(int n)
{
    int a[100], i;
    for(i=0;i<n;i++)
    {
        a[i] = i*i;
    }
    printf("The squares of the indices are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}
int main(void)
{
    int num;
    printf("Enter the numbers of elements of the array: ");
    scanf("%d",&num);
    SquareIndex(num);
}