#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i = 0, j = 0;
    int a[5], h;

    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &h);
    for(i = 0; i <= 4; i++)
    {
        if( h + 10 >= a[i])
        {
            j++;
        }
    }
    printf("%d", j);








    return 0;
}