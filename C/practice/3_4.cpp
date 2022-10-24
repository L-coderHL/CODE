#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int y, leap = 0;

    scanf("%d", &y);
    if(y % 4 == 0 && y % 100 != 0 || y %400 == 0)
    {
        leap = 1;
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