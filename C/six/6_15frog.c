#include <stdio.h>
int main()
{
    int n;
    int frog(int n);

    scanf("%d", &n);
    printf("%d", frog(n));
    return 0;
}

int frog(int n)
{
    int c;
    if(n == 1)
    {
        c = 1;
    }
    else if(n == 2)
    {
        c = 2;
    }
    else
    {
        c = frog(n - 1) + frog(n - 2);
    }
    return c;
}