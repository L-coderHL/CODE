#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, t;
    int a[8], b[8], c[8], d[8];
    int cal(int*);
    
    
    for(i = 0; i <= 7; i++)
    {
        scanf("%1d", &a[i]);
       
    }
     for(i = 0; i <= 7; i++)
    {
        scanf("%1d", &b[i]);
       
    }
     for(i = 0; i <= 7; i++)
    {
        scanf("%1d", &c[i]);
       
    }
    for(i = 0; i <= 7; i++)
    {
        scanf("%1d", &d[i]);
        
    }
    printf("%d.%d.%d.%d", cal(a),cal(b),cal(c),cal(d));
    return 0;
}

int cal(int *a)
{
    int i,j,sum = 0, ip[8];
    
    for(j = 0; j <= 7; j++)
    {
        ip[j] = pow(2,7-j);
    }
    for(i = 0; i <= 7; i++)
    {
        sum = sum + ip[i] * a[i];
    } 
    sum = sum; 
    return sum;
}