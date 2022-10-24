#include <stdio.h>
#include <math.h>
#include <string.h>
int data(int y, int m, int d)
{
    int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, c = 0, leap;

    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        leap = 1;
    }
      
    if(leap == 1)
    {
        mon[1] = 29;
    }
    else 
    {
        mon[1] = 28;
    }
    
    for(i = 0; i < m - 1; i++)
    {
        c = c + mon[i];
    }
    c = c + d;
    return c;
}
int yeard(int y)
{
    int leapyear(int);
    int i, sum = 0;
    for(i = 2000; i < y; i++)
    {
        sum = sum + 365 + leapyear(i);
    }
    return sum;
}
int leapyear(int x)
{
    int leap;
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    return leap;
}

int main()
{
    int i, j;
    int y, m, d;
    int sum;
    scanf("%d%d%d", &y, &m, &d);
    sum = yeard(y) + data(y, m, d) - 1;
    i = (sum + 6) % 7;
    printf("%d", i);
    return 0;
}