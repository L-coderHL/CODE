#include <stdio.h>

int x[20][20] = {0};
int y[10][10];
int c[20] = {0};
int m, n;
int main()
{
    int i, j, k, t;
    int minimize;
    int min(int, int);

    scanf("%d %d",&n, &m);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&c[i]);
    }
    for(k = 1; k < n; k++)
    {
         scanf("%d %d", &i, &j);
         scanf("%d", &x[i][j]);
    }
    for(i = 1; i <= n; i++)
    {
        x[i][i] = 0;
        for(j =1; j <= n; j++)
        {
            x[j][i] = x[i][j];
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    for(k = 0; k < m; k++)
    {
        scanf("%d %d", &i, &j);
        if(x[i][j] != 0)
        {
            printf("%d", x[i][j] * c[i]);
        }
        else
        {
            for(k = 1, t = 0, minimize = 100; k <= n; k++)
            {
                if(x[k][j] != 0)
                {
                    y[t][1] = j;
                    t++;
                    j = k;
                    minimize = min(minimize, x[k][j] * c[k]);
                }
            }
            
        }
    }
    return 0;
}

int min(int a, int b)
{
    int c;
    if(a > b)
    {
        c = b;
    }
    else
    {
        c = a;
    }
    return c;
} 

int road(int i, int j)
{
    int k;
    for(k = 1; k <= n; k++)
    {
        if(x[k][j] != 0)
        {
            y[t][1] = j;
            t++;
            j = k;
            minimize = min(minimize, x[k][j] * c[k]);
        }
    }

}
