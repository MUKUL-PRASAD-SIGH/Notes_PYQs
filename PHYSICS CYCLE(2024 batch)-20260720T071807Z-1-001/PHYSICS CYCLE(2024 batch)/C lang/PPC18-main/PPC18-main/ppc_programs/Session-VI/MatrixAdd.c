#include<stdio.h>

int main(void)
{
    int m, n, p, q;
    printf("Enter order of the first matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter order of the second matrix: ");
    scanf("%d %d",&p,&q);
    if(m==p && p==q)
    {
        int a[m][n], b[p][q], i, j, sum[m][n];
        printf("Enter the elements of the first matrix: ");
        for(i=0;i<m;i++)
        {
            printf("Row %d: ",(i+1));
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix: ");
        for(i=0;i<m;i++)
        {
            printf("Row %d: ",(i+1));
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("Sum Matrix is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%3d",sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Matrices are incompatible for addition.");
}