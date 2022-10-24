#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, l, flag = 0;
    char a[10];

    gets(a);
    l = strlen(a);
    for(i = 0; i < l/2; i++)
    {
        if(a[i] != a[l - i - 1])
        break;
        flag = 1;
    }
    if(flag)
    {
        printf("Y");
    }
    else
    {
        printf("N");
    }
    return 0;
}