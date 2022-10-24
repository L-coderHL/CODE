#include <stdio.h>
int main()
{
    int n;
    int jump(int);
    scanf("%d", n);
    print("%d",jp(n));
    return 0;
}

int jp(int n)
{
    int a, c;
    if(n == 1)
    {
        c = 1;
    }
    else
    {
        if (a == 1)
        {
        n = 1 + jp(n-1);
        }
        else
        {
        n = 2 + jp(n-2);
        }
    }
}

