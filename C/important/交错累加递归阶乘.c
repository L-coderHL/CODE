#include <stdio.h>
#include <math.h> 
int flag = -1;
int j = 1;

int main()
{
    double f(double x);
    double x, a;
    scanf("%lf", &x);
    a = f(x);
    printf("%.3lf\n%d", a, j - 1);
}
double f(double x)
{
    double t, sum;
    int a;
    double g(int);
   
    a = 2 * j - 1;   
    t = pow(x,a) / g(a);
    j++;
    
    flag = -1 * flag;
    if(t <= 0.00001)
    {
        sum = t * flag;
    }
    else
    {
        sum =t * flag + f(x);
    }     
    return sum;   
}

double g(int i)
{
    double d;
    if(i == 0 || i == 1)
    {
        d = 1;
    }
    else
    {
        d = i * g(i - 1);
    }
    return d;
}
