#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = {'\0'};
    void analog(char *);

    gets(a);
    analog(a);
}

void analog(char *x)
{
    int i;
    int a = 0, b = 0, c = 0, d = 0, e = 0;

    for(i = 0; *(x + i) != '\0'; i++)
    {
        if (*(x + i) >= 'A' && *(x + i) <= 'Z')
        {
            a++;
        }
        else if(*(x + i) >= 'a' && *(x + i) <= 'z')
        {
            b++;
        }
        else if(*(x + i) == ' ')
        {
            c++;
        }
        else if(*(x + i) >= '0' && *(x + i) <= '9')
        {
            d++;
        }
        else
        {
            e++;
        }
    }
    printf("upper case:%d\nlower case:%d\nspace:%d\ndigit:%d\nother:%d", a, b, c, d, e);
}


