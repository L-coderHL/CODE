#include <stdio.h>
#include <math.h>
#include <string.h>
// 65 // 49
int main()
{
    int i;
    char ph[9];
    int a[7];
    char trans(char);
    gets(ph);
    
    for(i = 0; i < 8; i++)
    {
        if(ph[i] >= 65 && ph[i] <= 90)
        {
            ph[i] = trans(ph[i]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        printf("%c", ph[i]);
    }
    printf("-");
    for(i = 3; i < 7; i++)
    {
        printf("%c", ph[i]);
    }
    return 0;
}
char trans(char x)
{
    char c;
    if(x <= 'O')
    {
        c =  (x - 65)/ 3 + 2 + 48;
    }
    else if(x >= 'P' && x <= 'S')
    {
        c = '7';
    }
    else if(x >= 'T' && x <= 'V')
    {
        c = '8';
    }
    else if(x >= 'W' && x <= 'Y')
    {
        c = '9';
    }
    return c;
}