#include <stdio.h>
int k;
int x[3];
int main()
{
    int n,r;
    int black(int n);

    scanf("%d", &n);
    r = black(n);
    printf("%d", r);
    return 0;
}


int black(int n)
{
   
    void div(int n);
    void order(int n);
    int c, a, b;

    
    div(n);
    order(n);
    a = x[0] * 100 + x[1] * 10 + x[2];
    b = (x[2] * 100 + x[1] * 10 + x[0]);
    c = a - b;
    if(c == k)
    {
        c = k;
    }
    else
    {
        k = c;
        c = black(c);
    }
    return c;
}




void order(int n)
{
    int i, j;
    int max, c, k, cache;

    for(i = 0; i <= 2; i++)
    {
        for(j = i + 1, max = x[i], k = i; j <= 2; j++)
        {
            if(max < x[j])
            {
                max = x[j];
                k = j;
            }
        }
        cache = x[i];
        x[i] = x[k];
        x[k] = cache;
    }
}

void div(int n)
{     
    x[0] = n / 100;
    x[1] = (n - x[0] * 100) / 10;  
    x[2] = n % 10;
}