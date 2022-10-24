#include <stdio.h>
#include <string.h>
int k;
int main()
{
    int a[4], b[8];
    int i, j;
    void trans(int x);

    scanf("%d.%d.%d.%d", &a[0], &a[1], &a[2], &a[3]);
    for(i = 0; i <= 3; i++)
    {
        trans(a[i]);
        if(i == 3) break;
        printf(" ");
    }
    return 0;
}

void trans(int x)
{
    int i, t;
    int b[8] = {0};
    for(i = 0, t = x, k = 0; t > 0; i++)
    {
        b[i] = t % 2;
        t = t / 2;
        k = i;
    }
    for(i = 7; i >= 0; i--)
    {
        printf("%d",b[i]);
    }
}