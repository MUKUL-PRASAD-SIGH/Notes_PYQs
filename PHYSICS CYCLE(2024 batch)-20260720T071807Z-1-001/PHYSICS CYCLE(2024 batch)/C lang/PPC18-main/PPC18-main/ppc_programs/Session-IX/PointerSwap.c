#include<stdio.h>
void Swap(int x, int y)
{
        int *a, *b, t;
        a = &x;
        b = &y;
        printf("The values before swapping are x = %d, y = %d.",*a, *b);
        t = *a;
        *a = *b;
        *b = t;
        printf("The values after swapping are x = %d, y = %d.",*a, *b);
}
int main(void)
{
        int m, n;
        printf("Enter the value of x: ");
        scanf("%d",&m);
        printf("Enter the value of y: ");
        scanf("%d",&n);
        Swap(m,n);
}

