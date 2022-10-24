#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j;
    int n, sum = 1;
    int prime(int);

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(prime(i))
        {
            sum = sum * i;
        }
    }
    printf("%d", sum);
    return 0;
}

int prime (int a)
{
    int i;
    int c;

    for(i = 2, c = 1; i <= a / 2; i++)
    {
        if(a == 2)
        {
            c = 1;
        }
        else
        {
            if (a % i == 0)
            {
                c = 0;
                break;
            } 
            else
            {
                c = 1;
            }
        }        
    }
    return c;
}
