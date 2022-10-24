#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b, c;
    void odd(int x);

    scanf("%d%d%d", &a,&b,&c);
    odd(a);
    odd(b);
    odd(c);
    return 0;
}
void odd(int x)
{
    if(x % 2 == 1)
    {
        printf("%d is odd number!\n", x);
    }
}
