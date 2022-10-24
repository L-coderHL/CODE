#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double a, b, c;
    
    scanf("%lf%lf", &a, &b);
    if (a >= b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    printf("%.2lf",c);
    return 0;
}