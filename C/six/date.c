#include <stdio.h>
int x[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
static int y, m, d;
int main()
{
    int leap = 0;
    void add(void);

    scanf("%d%d%d", &y, &m, &d);
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        leap = 1;
    }
      
    if(m == 2 && leap == 1)
    {
        x[1] = 29;
        add();
    }
    else 
    {
        x[1] = 28;
        add();
    }
    printf("%d %d %d",y, m, d);
    
}

void add(void)
{
    if(d < x[m-1])
    {
        d = d + 1;
    }
    else if(m != 12 && d == x[m-1])
    {
        m++;
        d = 1;
    }
    else if(m == 12, d == 31)
    {
        y++;
        m = 1;
        d = 1;
    }
    
}