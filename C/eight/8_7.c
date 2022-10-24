#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    double t = 1, sum = 0;
    for(i = 1;i <= 10001; i++)
    {
        t = 1.0 / i * pow(-1, i - 1);
        sum = sum + t;          
    }   
    printf("%.6lf", sum);
}