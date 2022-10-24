#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j;
    long x, sum = 0;
    long factorial(int);
       
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        sum = sum + 1 / factorial(i);
    }
    printf("%d", sum);
    return 0;
}


long factorial(int n)
{
    long x;
    int d;
    d = n + x;
    if(n == 1 || n == 0)
    {
        x = 1;
    }
    else
    {
        x = n * factorial(n - 1);
    }
    return d;
}

