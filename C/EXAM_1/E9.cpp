#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, sum = 0, n, c, l,count = 0;
    int a[100];
    void order(int *, int);
    scanf("%d%d", &n, &c);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    order(a,l);
    for(i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }
    for(i = 0; i < l; i++)
    {
        sum = sum + a[i];
        count++;
        if(sum > c) break;
    }

    printf("%d", count);
    return 0;
}
void order(int *a, int l)
{
    int min, k, i, j, temp;
    void swap(int *, int *);
    for(i = 0; i < l-1; i++)
    {
        for(j = i + 1, min = a[i], k = i; j <= l-1; j++)
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
