#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[10], b[10];
    int i, j;
    void order(int *, int);
    int prime(int);

    for(i = 0, j = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        if(prime(a[i]))
        {
            b[j] = a[i];
            j++;
        }
    }
    if(j)
    {
        order(b, j);
        for(i = 0; i <= j-1; i++)
        {
            printf("%d ", b[i]);
        }
    }
    else
    {
        printf("No prime");
    }
    
    return 0;
}

int prime (int x)
{
    int i, c = 1;
    for(i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            c = 0; 
            break;           
        }      
    }
    return c;
}
void order(int *x, int l)
{
    int i, j;
    void swap(int *, int *);
    for(i = 0; i <= l-2; i++)
    {
        for(j = i + 1; j <= l-1; j++)
        {
            if(x[i] > x[j])
            {
                swap(x+i,x+j);
            }
        }
    }
}

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *b ^ *a;     
}
