#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double a, b, c;
    double s, p;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    p = (a + b + c) / 2;
    s = p * (p - a) * (p-b) * (p-c);
    printf("%.2lf", s);

    return 0;
}