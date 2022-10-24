#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double a, b, c, max;

    scanf("%lf%lf%lf", &a, &b, &c);
    if (a > b)
    {
        if(c > a)
        {
            max = c;
        }
        else
        {
            max = a;
        }
        
    }
    else if (c > b)
    {
        max = c;
    }
    else
    {
        max = b;
    }
    printf("%.2lf", max);
    return 0;
}