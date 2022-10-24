#include <stdio.h>
#include <string.h>

int main()
{
    char a[3][20], str[20] = {"\0"};
    int i, d;
    
    for(i = 0; i <= 2; i++)
    {
        gets(a[i]);
        d = strcmp(str,a[i]);
        if(d < 0)
        {
            strcpy(str, a[i]);
        }
    }
    puts(str);

}