#include <stdio.h>
#include <math.h>
#include <string.h>
#define pi 3.141592657
int main()
{
    double a, b, ball1; 
    double ball(double d);

    scanf("%lf%lf", &a, &b);
    ball1 = ball(a) - ball(b);
    
    printf("%.2lf",ball1);
    return 0;
}

double ball(double d)
{
    double V, m, r, p = 11340;
    r= d / 2 * 0.01;
    V = 4.0 / 3 * pi * r * r *r;
    m = V * p;
    return m;
}