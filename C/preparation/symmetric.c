#include <stdio.h>
#include <string.h>

int main()
{
    char c[10] = {"0"};
    int i, j, k;
    int l;

    scanf("%s",c);
    l = strlen(c);
    for(k = 0,i = 0, j = l - 1; j - i >= 0; i++, j--)
    {
        if(c[i] == c[j])
        {
            k = 1;
        }
        else
        {
            k = 0;
            break;
        }
    }
    if(k == 1) 
        printf("Y");
    else 
        printf("N");
    return 0;
}