#include <stdio.h>
#include <string.h>
int i = 0;
int main()
{
    int x[100], sum;
    char a[100];
    char c[10][5] = {{"ling"},{"yi"},{"er"},{"san"},{"si"},{"wu"},{"liu"},{"qi"},{"ba"},{"jiu"}};
    void f(int, int *);
    int calculate(char *);
    int j;

    gets(a);
    sum = calculate(a);
    f(sum, x);
    for(j = i; j >= 0; j--)
    {
        printf("%s",*(c + x[j]));
        if(j != 0)
        {
            printf(" ");
        }
    }
    return 0;
}

void f(int a, int *x)
{
    if(a < 10)
    {
        *(x + i) = a;
    }
    else
    {
        *(x + i) = a % 10;
        a = a / 10;
        i++;
        f(a, x);
    }
}

int calculate(char *x)
{
    int j, sum = 0;
    for(j = 0; *(x + j) != '\0'; j++)
    {
        sum = sum + (*(x + j) - 48);
    }
    return sum;
}