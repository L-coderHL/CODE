#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j;
    double p = 1 , r = 7.0 / 100;

    for(i = 0; i <= 9; i++)
    {
        p = p*(1.0+r);
    }
    printf("p=%.6lf", p);









    return 0;
}