#include <stdio.h>
#include <math.h>
#include <string.h>
#define pi 3.141592657
int main()
{
    int p = 11340;
    double d, r, m, V;
    scanf("%lf", &d);
    r = d / 2 * 0.01;
    V = 4.0 / 3 * pi * r * r * r;
    m = p * V;
    printf("%lf",m);
    return 0;
}