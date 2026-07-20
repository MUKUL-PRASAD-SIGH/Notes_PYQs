#include<stdio.h>

int main(void)
{
    int m, n;
    printf("Enter order of the matrix: ");
    scanf("%d %d",&m,&n);
    int a[m][n], i, j;
    printf("Enter the elements of the first matrix: ");
    for(i=0;i<m;i++)
    {
        printf("Row %d: ",(i+1));
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            a[i][i] = 0;
        }
    }
    printf("The Resulting matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
}