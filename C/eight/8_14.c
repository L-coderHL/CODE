#include <stdio.h>
int main()
{
    int a, b[5];
    int i, j;
    
    scanf("%d", &a);
    for(i = 0; i <= 4; i++)
    {
        b[i] = a % 10;
        a = a / 10;
    }
    for(i = 2; i <= 4; i++)
    {
        printf("%d", b[i]);
    }
    return 0;
}