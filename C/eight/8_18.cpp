#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j;
    int a, b, c;
    double l, s, p; 
    scanf("%d%d%d",&a, &b, &c);

    if(!(a + b > c && a + c > b && b + c > a))
    {
        printf("They can't form a triangle.");
    }
    else
    {
        
        l = a + b + c;
        p = l / 2;
        s = sqrt(p * (p - a)*(p - b)* (p - c));
        printf("%.2lf\n%.2lf", l, s);
    }








    return 0;
}