#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b, i, sum = 0;
    int prime(int);
    scanf("%d%d", &a,&b);

    if(a > b)
    {
        a = a^b;
        b = b^a;
        a = a^b;
    }
    for(i = a + 1; i < b; i++)
    {
        sum = sum + prime(i);
    }
    printf("%d", sum);
    return 0;
}

int prime(int x)
{
    int c = 1, i;
    for(i = 2; i <= x / 2; i++)
    {
        if(x % i == 0) 
        {
            c = 0;
            break;
        }      
    }
    return c;  
}
