#include <stdio.h>
int main()
{
    int a, b;
    int big(int, int);
    int (*c)(int, int);

    scanf("%d%d", &a, &b);
    c = big;
    printf("%d",(*c)(a, b));
    return 0;
}

int big(int a, int b)
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