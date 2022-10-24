#include <stdio.h>
int main()
{
    int n;
    int multi(int);

    scanf("%d", &n);
    printf("%d", multi(n));
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