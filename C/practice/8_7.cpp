#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
        int i, flag = -1;
        double t = 1, sum = 0;

        for(i = 1; t >= 0.0001; i++)
        {
            t = 1.0 / i;
            flag = -1 * flag;      
            sum = sum + t * flag;
        }
        printf("%.6lf", sum);
    return 0;
}