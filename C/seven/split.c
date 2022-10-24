#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = {'\0'};
    char *p = a;

    gets(a);
    while(*p != '\0')
    {
        puts(p);
        p++;
    }
    return 0;
}