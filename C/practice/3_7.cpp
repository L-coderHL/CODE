#include <stdio.h>
int year_days(int y, int y_start)
{
    int i, sum_year = 0;
    int leap(int);
    for(i = y_start; i < y; i++)
    {
        sum_year =  sum_year + 365 + leap(i);
    }
    return sum_year;
}
int mon_days(int y, int m)
{
    int i, sum_mon = 0;
    int leap(int);
    int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    mon[1] = 28 + leap(y);
    for(i = 0; i < m - 1; i++)
    {
        sum_mon = sum_mon + mon[i];
    }
    return sum_mon;
}
int leap(int y)
{
    int c = 0;
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        c = 1;
    }
    return c;
}

int main()
{
    int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int y, m, d, days;

    scanf("%d,%d,%d", &y, &m, &d);  
    mon[1] = 28 + leap(y);
    if(m > 12 || m < 1 || d > mon[m] || d < 1)
    {
        printf("data error.");
    }
    else
    {
        days = mon_days(y,m) + d;
        printf("It is the %dth day.", days);
    }    
    return 0;
}