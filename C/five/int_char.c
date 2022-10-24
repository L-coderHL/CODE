#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char c[20];
    int b[20];
    int i, l, sum = 0;
    
    gets(c);
    l = strlen(c);
    for(i = 0; i < l; i++)
    {
        b[i] = c[i] - 48;
        sum = sum + b[i] * pow(10, l - i - 1);
    }
    printf("%d", 2 * sum);
    return 0;

}