#include<stdio.h>

double ArrAvg(int* n, int l)
{
    int i;
    double avg = 0;
    for(i=0;i<l;i++)
    {
        avg += *(n+i);
    }
    avg /= l;
    return avg;
}
int main(void)
{
    int len;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter the elements of the array: ");
    for(int i=0;i<len;i++)
    scanf("%d",(arr+i));
    printf("The average value of the elements in the array is: %lf",ArrAvg(arr,len));
}