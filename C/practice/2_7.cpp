#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double a, b, c;
    double nmt, x1, x2;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    nmt =sqrt(pow(b, 2) - 4 * a * c);
    x1 = (-b + nmt ) / 2.0 / a / c;
    x2 = (-b - nmt) / 2.0 / a / c;
    printf("%.2lf ", x1);
    printf("%.2lf", x2);


    return 0;
}