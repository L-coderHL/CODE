#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double r = 0.1, p = 1;
     
    
    for(int i = 0; i <= 9; i++)
    {
        p = p * (1 + r);
    }
    printf("%lf", p);



    return 0;
}