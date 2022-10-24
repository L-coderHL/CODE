#include <stdio.h>
#define pi 3.141592657
int main()
{
    double d = 9.8 * 0.01, p = 11340, m, r;
    r = d / 2;
    m = 4.0 / 3 * pi * r * r * r * p;
    printf("%f", m);
}