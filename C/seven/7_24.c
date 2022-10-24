#include <stdio.h>
int main()
{
    int a = 34, b = -21, i;
    int (*p)(int, int);
    int max(int, int);
    int min(int, int);
    int sum(int, int);

    scanf("%d", &i);
    if(i == 1) p = max;
    else if(i == 2) p = min;
    else if(i == 3) p = sum;
    printf("%d",(*p)(a, b));
    return 0;
}
int max(int a, int b)
{
    int z;
    if(a > b) z = a;
    else z = b;
    return z;
}

int min(int a, int b)
{
    int z;
    if(a > b) z = b;
    else z = a;
    return z;
}

int sum(int a, int b)
{
    int z;
    z = a + b;
    return z;
}