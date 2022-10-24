#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[100];
    int word_num(char *);
    gets(a);
    printf("%d",word_num(a));
    return 0;
}

int word_num(char *a)
{
    int word, count,l, i;
    l = strlen(a);    
    for(i = 0, word = 0; i <= l; i++)
    {
        if(a[i] != ' ' && a[i] != '\0')
        {
            word = 1;
        }
        if(word == 1 && (a[i] == ' '||a[i] == '\0'))
        {
            word = 0;
            count++;
        }
    }
    return count;
}