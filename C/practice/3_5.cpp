#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b, sum_fac,sum, result;
    scanf("%d%d", &a, &b);
    sum_fac = a * a + b * b;
    if(sum_fac > 100)
    {
        result = sum_fac / 100;
    }
    else
    {
        result = a + b;
    }
    printf("%d", result);
    return 0;
}