#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int i, j;
    int word = 0, num = 0;

    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ' '&& word == 0)
        {
            continue;
        }
        else
        {
            if(a[i] != ' ' && word == 0)
            {
                printf("  ");
                word = 1;
            }
            if(word == 1)
            {
                printf("%c", a[i]);
            }
            if(a[i] == '.' || a[i] == '?' || a[i] == '!'&& word == 1)
            {
                word = 0;
                printf("\n");
                num++;
            }   
        }
    }
    printf("%d", num);
   return 0;
}