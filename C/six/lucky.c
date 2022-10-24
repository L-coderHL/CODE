#include <stdio.h>
int main()
{
    int a, b, a1, b1, c;
    int d;
    int pick(int a);
    int f(int, int, int);

    scanf("%d%d", &a, &b);
    a1 = pick(a);
    b1 = pick(b);
    c = 10 * a1 + b1;
    d = f(a, b, c);
    if(d == 1)
    {
        printf("Lucky!");
    }
    else
    {
        printf("No!");
    }


    return 0;
}

int pick(int a)
{
    int c;
    if(a < 10)
    {
        c = a;
    }
    else
    {
        c = a % 10;
    }
    return c;
}

int f(int a, int b, int c)
{
    int d;
    if(a % c == 0 || b % c ==0)
    {
        d = 1;
    }
    else
    {
        d = 0;
    }
    return d;
}