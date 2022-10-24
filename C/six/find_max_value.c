#include <stdio.h>
int main()
{
    int max(int, int);
    int a, b;

    scanf("%d%d",&a ,&b); 
    printf("%d", max(a, b));       
}
int max(int a, int b)
{
    int c;
    if(a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    return c;
}