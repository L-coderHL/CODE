#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    int i, num = 0, word = 0;
    int l;

    gets(c);
    l = strlen(c);
    for(i = 0; i < l; i++)
    {
        if(c[i] == ' ')
        {
            word = 0;
        }
        else if(word == 0)
        {
            word = 1;
            num++;
        }
    }
    printf("%d", num);

    return 0;
}