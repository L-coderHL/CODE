#include <stdio.h>
int main()
{
    int n, i = 0;
    int x[50][3];
    int a, b;
    int multi(int);
    int sum = 0;

    scanf("%d", &n);
    if(n == 0)
    {
        printf("%d",0);
    }
    else
    {
    for(a = 0; a <= n; a++)
    {
        if((n - a) % 2 == 0)
        {
            x[i][0] = a;
            x[i][1] = (n - a) / 2;
            x[i][2] = multi((x[i][1] + x[i][0])) / multi(x[i][0]);
            sum = sum + x[i][2];
            i++;
        }
    }
    printf("%d", sum);
    }
    return 0;
}

int multi(int n)
{
    int c;
    if(n == 1 || n == 0)
    {
        c = 1;
    }
    else
    {
        c = n * multi(n - 1);
    }
    return c;
}