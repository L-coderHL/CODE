#include <stdio.h>
#include <math.h>
int main()
{
    int i, a[10], *min;
    for(i = 0, min = a; i <= 9; i++)
    {
        scanf("%d", a+i);
        if(abs(a[i]) < abs(*min))
        {
            *min = a[i];
        }
    }
    printf("%d", *min);
    return 0;
}