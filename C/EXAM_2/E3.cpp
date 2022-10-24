#include <stdio.h>
#include <math.h>
#include <string.h>

void dis(int *x, int a)
{
    int i;
    for(i = 0; i <= 3; i++)
    {
        x[i] = a % 10;
        a = a / 10;
    }
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

void kb(int *x, int a)
{
    int x1, x2;
    dis(x,a);
    order(x, 4);
    x1 = 1000*x[3] + 100*x[2] + 10*x[1] + x[0];
    x2 = 1000*x[0] + 100*x[1] + 10*x[2] + x[3];
    a = x1 - x2;
    printf("%d\n", a);
    if(a == 6174)
    {
        1;
    }
    else
    {
        kb(x, a);
    }
}

int main()
{
    int x[4], a;
    scanf("%d", &a);
    kb(x,a);
    return 0;
}
