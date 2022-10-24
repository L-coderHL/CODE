#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[10];
    int i,j, temp;
    int p1,p2;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 2; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d %d", a[0],a[1]);
    return 0;
}