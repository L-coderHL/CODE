#include <stdio.h>
#include <string.h>
int main()
{
    char a[80] = {"\0"}, b[80]= {"\0"}, c[80]= {"\0"};
    char *p1, *p2, *p3;
    int i, j;
    void swap(char **, char **);
    // void swap(char *, char *);

    gets(a);
    gets(b);
    gets(c);

    p1 = a, p2 = b, p3 = c;

    if(strcmp(a, b) > 0)
    {
        swap(&p1, &p2);
    }
    if(strcmp(a, c) > 0)
    {
        swap(&p1, &p3);
    }
    if(strcmp(b, c) > 0)
    {
        swap(&p2, &p3);
    }

    // if(strcmp(a, b) > 0)
    // {
    //     swap(p1, p2);
    // }
    // if(strcmp(a, c) > 0)
    // {
    //     swap(p1, p3);
    // }
    // if(strcmp(b, c) > 0)
    // {
    //     swap(p2, p3);
    // }
    puts(p1);
    puts(p2);
    puts(p3);
    return 0;
}

void swap(char **p1, char **p2)
{
    char *p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}

// void swap(char *a, char *b)
// {
//    char t;
//    for(;*a != 0 || *b != 0; a++, b++)
//    {
//         t = *a;
//         *a = *b;
//         *b = t;
//    }     
// }