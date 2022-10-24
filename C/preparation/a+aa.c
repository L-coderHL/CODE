#include <stdio.h>
#include <math.h>
int main()
{
    int a, n, c;
    int multi(int a, int n);

    scanf("%d%d", &a, &n); 
    c = multi(a, n);
    printf("s=%d", c);
    return 0;
}

int multi(int a, int n)
{
    int i, sum = 0;
    int f(int a, int n);

    for(i = 0; i < n; i++)
    {
        sum = sum +f(a, i + 1);
    }
    return sum;
}
int f(int a, int n)
{
    int i;
    int c, d = 0;

    for(i = n; i >= 0; i--)
    {
        c = a * pow(10, i - 1);
        d = d + c;
    }
    return d;
}