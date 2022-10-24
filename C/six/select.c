#include<stdio.h>
int main()
{
    int a[10];
    int i, j, min, k;
    int cache;

    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i <= 9; i++)
    {
        for(j = i + 1, k = i, min = a[i]; j <= 9; j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                k = j;
            }
        }
        cache = a[i];
        a[i] = a [k];
        a[k] = cache;
    }
    for(i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}