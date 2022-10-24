#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf", &x);

    if(x > 0)
    {
        y = 1 + x;
    }
    else if(x == 0)
    {
        y = 1;
    }
    else
    {
        y = 3 * x;
    }
    printf("%.f", y);
}