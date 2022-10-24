#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[1000], b[500][2];
    int n, m;
    int i, j, k = 0;
    void order(int *x, int l);

    scanf("%d%d", &n, &m);

    for(i = 0; i <= n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    order(a,n);
    for(i = 0; i <= n-2; i++)
    {
        if(a[i] > m) continue;
        for(j = i + 1; j <= n-1; j++)
        {
            if(a[i] + a[j] == m)
            {
                b[k][0] = a[i];
                b[k][1] = a[j];                 
                k++;
            }
        }
    }
    if(k == 0)
    {
        printf("no");
    }
    {
        for(i = 0; i < k; i++)
        {
            if(b[i][0] != b[i-1][0] || i == 0)
            {
                printf("%d,%d\n",b[i][0],b[i][1]);
            }        
        }
    }
    return 0;
}

void order(int *x, int l)
{
    int i, j;
    void swap(int *, int *);
    for(i = 0; i <= l-2; i++)
    {
        for(j = i + 1; j <= l-1; j++)
        {
            if(x[i] > x[j])
            {
                swap(x+i,x+j);
            }
        }
    }
}

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *b ^ *a;     
}