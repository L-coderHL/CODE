#include <stdio.h>
int main()
{
    int x, leap;
    scanf("%d", &x);
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    if(leap == 1)
    {
        printf("y");
    }
    else
    {
        printf("n");
    }
    return 0;
}