#include <stdio.h>
int n;
int b[10];
int main()
{
    char c[10];
    void trans(char c[]);

    scanf("%d", &n);
    trans(c);
    return 0;
}

void trans(char c[])
{
    int div(int);
    int i, j, l;

    l = div(n);
    for(i = 0, j = l - 1; j >= 0;i++, j--)
    {
        c[i] = (char)(b[j] + 48);
        printf("%c*", c[i]);
    }

}

int div(int n)
{
    int i, j;

    if(n < 10)
    {
        b[0] = n;
        i = 1;
    }
    else
    {
        for(i = 0; n != 0; i++)
        {
            b[i] = n % 10;
            n = n / 10;
        }
    }
    return i;
}