#include <stdio.h>
int main()
{
    int n;
    long multi(int);

    scanf("%d", &n);
    printf("%d", multi(n));
    return 0;
}

long multi(int n)
{
    int x;
    if(n == 1 || n == 0)
    {
        x = 1;
    }
    else
    {
        x = n * multi(n - 1);
    }
    return x;
}