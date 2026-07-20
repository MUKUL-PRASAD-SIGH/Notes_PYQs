#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int r, c, v;
} term;

void transpose(term a[], term t[])
{
    int i, j, numcols = a[0].c, numterms = a[0].v, rt[10], sp[10];
    t[0].r = numcols;
    t[0].c = a[0].r;
    t[0].v = numterms;
    if (numterms > 0)
    {
        for (i = 0; i < numcols; i++)
        {
            rt[i] = 0;
        }
        for (i = 1; i <= numterms; i++)
        {
            rt[a[i].c]++;
        }
        sp[0] = 1;
        for (i = 1; i < numcols; i++)
        {
            sp[i] = sp[i - 1] + rt[i - 1];
        }
        for (i = 1; i <= numterms; i++)
        {
            j = sp[a[i].c]++;
            t[j].r = a[i].c;
            t[j].c = a[i].r;
            t[j].v = a[i].v;
        }
    }
}
void main()
{
    term a[20], t[20];
    printf("Enter the total rows, columns and values : ");
    scanf("%d%d%d", &a[0].r, &a[0].c, &a[0].v);
    // please be careful in input, if the matrix is 5x5 then rows and columns start from 0 to 4.
    for (int i = 1; i <= a[0].v; i++)
    {
        printf("Enter the row column and value: ");
        scanf("%d%d%d", &a[i].r, &a[i].c, &a[i].v);
    }
    printf("\n Original matrix \n");
    for (int i = 1; i <= a[0].v; i++)
    {
        printf("%d\t%d\t%d\n", a[i].r, a[i].c, a[i].v);
    }
    transpose(a, t);
    printf("\n Transpose matrix \n");
    for (int i = 1; i <= t[0].v; i++)
    {
        printf("%d\t%d\t%d\n", t[i].r, t[i].c, t[i].v);
    }
}