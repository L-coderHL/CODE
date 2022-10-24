#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j;
    int a[10];
    void order(int *);

    for(i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }
    order(a);
    for(i = 0; i <= 9; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void order(int *a)
{
    int min, k, i, j, temp;
    void swap(int *, int *);
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1, min = a[i], k = i; j <= 9; j++)
        {
            if(min > a[j])
            {
                k = j;
                min = a[j];               
            }
        }
        // temp = a[i];
        // a[i] = a[k];
        // a[k] = temp;
        if(i != k)
        {
            swap(a+i, a+k);
        }       
    }
}

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *b ^ *a;     
}
