#include <stdio.h>
#include <math.h>
int main()
{
    double x1, x2, x;
    double a, b, c;
    double nmt;
    double m, n;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a == 0 && b == 0)
    {
        printf("Not an equation");
    }
    else if(a == 0 && b != 0)
    {
        x = -c / b;
        printf("%.2lf", x);
    }
    else
    {
        nmt = pow(b, 2) - 4 * a * c;
        if(nmt >= 0)
        {
            x1 = (-b +sqrt(nmt)) / (2 * a);
            x2 = (-b -sqrt(nmt)) / (2 * a);
            if(x1 > x2)
            {
                printf("%.2lf %.2lf",x1,x2);
            }
            else
            {
                printf("%.2lf %.2lf",x2,x1);
            }            
        }        
        else if(nmt < 0)
        {
            m = -b / (2 * a);
            if(a < 0)
            {
                a = -a;
            }
            n = sqrt(-nmt) / (2 * a);
            printf("%0.2lf+%0.2lfi %0.2lf-%0.2lfi",m, n, m ,n);            
        }
    }
    return 0;
}