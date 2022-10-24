#include <stdio.h>

int main()
{
    double x;
    int n;
    double fact(int);
    double mypow(double, int);
    double equation(double, int);

    scanf("%lf %d", &x, &n);
    printf("%.4lf", equation(x, n));
}

double fact(int n)
{
    double c;
    if(n == 0 || n == 1)
    {
        c = 1.0;
    }
    else
    {
        c = n * fact(n - 1);
    }
    return c;
}

double mypow(double x, int n)
{
    double c;
    if(n == 0)
    {
        c = 1.0;
    }
    else
    {
        c = x * mypow(x, n - 1);
    }
    return c;
}

double equation(double x, int n)
{
    double c, sum = 0.0;
    int i;

    for(i = 1; i <= n; i++)
    {
        c = mypow(-1, i-1) * mypow(x, i) / fact(i);
        sum = sum + c;
    }
    return sum;
}