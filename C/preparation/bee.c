#include <stdio.h>
int main()
{
    int f(int);
    int c, a, b;
    scanf("%d%d", &a, &b);
    c = b - a + 1;
    printf("%d", f(c));

    return 0;
}
int f(int y)
{
    int c;
    if (y == 1 || y == 2)
    {
        c = 1;
    }
    else
    {
        c = f(y - 1) + f(y - 2);
    }
    return c;
}
