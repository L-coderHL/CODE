#include <stdio.h>
int main()
{
    int n, k, t, xl, yd, xr, yu;
    int i, j;
    int pby = 0, sdy = 0, m, insight = 0;
    int p[100][100] = {0};
    int judge(int, int, int, int, int, int);
    int max(int, int);
    
    scanf("%d%d%d%d%d%d%d",&n,&k,&t,&xl,&yd,&xr,&yu);
    for(i = 0; i < n; i++) 
    {
        for(j = 0, insight = 0, m = 0; j < 2 * t; j = j + 2)
        {
            scanf("%d %d", &p[i][j],&p[i][j + 1]);
            if(judge(p[i][j],p[i][j+1],xl,yd,xr,yu) == 1)
            {
                m++;
                insight = max(m, insight);
            }
            else
            {
                m = 0;
            }
        }
        if (insight >= k) 
            {
                sdy++;
            }
        else if(insight >= 0)
            {
                pby++;
            }

    }
    printf("%d\n%d",pby, sdy);
}

int judge(int a, int b, int x1, int y1, int x2, int y2)
{
    int c;
    if(a >= x1 && a <= x2 && b >= y1 && b <= y2)
    {
        c = 1;
    }
    else
    {
        c = 0;
    }
    return c;
}

int max(int a, int b)
{
    int c;
    if(a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    return c;
}  