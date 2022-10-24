#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    float a, c, d = 0;
    char b;
    scanf("%f %c %f", &a, &b, &c);

    if(b=='+')
    {
        d = a + c;
        printf("%.2f", d);
    }
    else if(b == '-')
    {
        d = a - c;
        printf("%.2f", d);
    }
    else if(b == '*')
    {
        d = a * c;
        printf("%.2f", d);
    }
    else if(b == '/')
    {
        if(c != 0)
        {
            d = a / c;  
            printf("%.2f", d); 
        }
        else
        {
            printf("error");
        }
    }       
    return 0;
}