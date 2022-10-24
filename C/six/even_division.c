#include <stdio.h>
#include <math.h>

int main()
{
    int e;
    int i, j;
    int prime(int);
    int min(int a, int b);

    scanf("%d", &e);
    if(e < 6 || e % 2 != 0)
    {
        printf("Input an even num (>=6)");
    }
    else
    {
        int minimize = e;
        for(i = 0; i <= e/2; i++)
        {
            if(prime(i) == 1 && prime(e - i) == 1)
            {
                minimize = min(i, minimize);
            }
        }
        printf("%d+%d", minimize, e - minimize );
    }
}
int prime(int a)
{
    int i;
    int r, d = 1;

    if(a == 1)
    {
        d = 0;
    }
    for(i = 2; i <= sqrt(a); i++)
    {
        r = a % i;
        if (r == 0)
        {
            d = 0;
            break;
        }
    }
    return d;
}
int min(int a, int b)
{
    int c;
    if (a > b)
    {
        c = b;
    }
    else
    {
        c = a;
    }
    return c;
}