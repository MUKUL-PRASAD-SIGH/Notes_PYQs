#include<stdio.h>

void Floydtri(int rows)
{
    int i, j, p = 1;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%4d",p);
            p++;
        }
        printf("\n");
    }
}
int main(void)
{
    int n;
    printf("Enter the number of rows of the triangle to be printed: ");
    scanf("%d",&n);
    Floydtri(n);
}