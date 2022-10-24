#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double a, c;
    scanf("%lf", &a);
    c = 5*(a - 32) / 9.0;
    printf("c=%.2f", c);
    return 0;
}