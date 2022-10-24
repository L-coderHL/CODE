#include <stdio.h>
int main()
{
    int a = 31743, b = 823, c, d, z;
    int i;
    
    c = a % b;
    d = a - c;
    for(i = 0;;i++)
    {
        c = d + b * i;
        z = c - a;
        if(z % 10 == 0)
        {
           break;
        }
    }
    printf("%d", c);
}