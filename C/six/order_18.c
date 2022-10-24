#include <stdio.h>
int main()
{
    int a[5];
    int i, o;
    void order(int a[], int o);
    
    for(i = 0; i <= 3; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&a[4]);
    if(a[1] < a[0])
    {
        o = 1;//从大到小
    }
    else
    {
        o = 0;//从小到大
    }
    order(a, o);
    for(i = 0; i <= 4; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void order(int a[], int o)
{
    int i, j;
    int cache;

    for(i = 0; i <= 3; i++)
    {
        for(j = i + 1; j <= 4; j++)
        {
            if(o == 1)
            {
                if(a[i] < a[j])
                {
                cache = a[i];
                a[i] = a[j];
                a[j] = cache;
                }
            }
            else
            {
                if(a[i] > a[j])
                {
                cache = a[i];
                a[i] = a[j];
                a[j] = cache;
                }
            }
            
        }
    }
}

