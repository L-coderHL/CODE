#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j;
    float p = 77;
    char a[10];

    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == 'V')
        {
            p = p * 2.0;
        }
        else if(a[i] == 'X')
        {
            p = p -54.5;
        }
        if(p <= 0) break;
    }
    if(p <= 0)
    {
        p = 0.0;     
    }
     printf("%.1f",p);
    
    return 0;
}