#include <stdio.h>
#include <string.h>
int main()
{
    char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
    void order(char *p[]);

    order(name);
    return 0;
}
void order(char *p[5])
{
    int i, j;
    char **str;
    char **p1, **p2;
    void swap(char **, char **);
    for(i = 0; i <= 3; i++)
    {
        for(j = i + 1, str = p + i; j <= 4; j++)
        {
            if (strcmp(*str, *(p + j)) > 0)
            {
                str = p + j;
            }
        }
        char **p0 = p + i;
        swap(p0, str);
    }
    for(i = 0; i <= 4; i++)
    {
        puts(*(p + i));
    }
}

void swap(char **p1, char **p2)
{
    char *p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}
