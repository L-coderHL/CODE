#include <stdio.h>
#include <math.h>
#include <string.h>
void ch(char x)
{
    if(x == '1')
    {
        printf("一");
    }
    if(x == '2')
    {
        printf("二");
    }
    if(x == '3')
    {
        printf("三");
    }
    if(x == '4')
    {
        printf("四");
    }
    if(x == '5')
    {
        printf("五");
    }
    if(x == '6')
    {
        printf("六");
    }
    if(x == '7')
    {
        printf("七");
    }
    if(x == '8')
    {
        printf("八");
    }
    if(x == '9')
    {
        printf("九");
    }
    if(x == '0')
    {
        printf("零");
    }
}

void pr_four(char *a)
{
    if(a[0] != '0')
    {
        ch(a[0]);
        printf("千");
    }
    if(a[1] != '0')
    {
        ch(a[1]);
        printf("百");
    }
    if(a[0] != '0' && a[1] == '0' && a[3] != '0')
    {
        printf("零");
    }
    if(a[2] != '0')
    {
        ch(a[2]);
        printf("十");
    }
    if(a[3] != '0')
    {
        ch(a[3]);
    }
}

int main()
{
    int l, i, j;
    char a[10], b[4], c[4] = {"0"};
    gets(a);
    l = strlen(a);
    if(l <= 4)
    {
        pr_four(a);
    }
    else if(l >= 4)
    {       
        for(i = l-4, j = 0; i < l; i++)
        {
            b[j] = a[i];
            j++;
        }
        for(i = l-5, j = 3; i >= 0; i--)
        {
            c[j] = a[i];
            j--;
        }
        if(l == 9)
        {
            ch(a[0]);
            printf("亿");
        }
        pr_four(c);
        printf("万");   
        pr_four(b);
    }
    return 0;
}