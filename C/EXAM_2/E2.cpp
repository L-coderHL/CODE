#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char x[10] = {"\0"}, b[4] = {'\0'};
    int l, i, j = 0; 
    void cha(char);
    void pr_fout(char *x);

    gets(x);
    l = strlen(x);

    if(l <= 4)
    {
        pr_fout(x);
    }
    else if(l > 4 && l <= 8)
    {
        for(i = 0; i < l - 4; i++)
        {
            b[j] = x[i];
            j++;
        }
        for(i >= l-4; i < l; i++)
        {

        }
        pr_fout(b);
        printf("万");
    }
    
    
    
    if(l == 1)
    {
        cha(x[0]);
    }
    if(x[9] != '\0')
    {
        cha(x[9]);
        printf("亿");
    }

   
    return 0;
}
void pr_fout(char *x)
{
    int i;
    void cha(char x);
    for(i = 0; i <= 3; i++)
    {
        if(i == 3 && x[i] == '0')
        break;
        cha(x[i]);
        if(i == 2 && x[i] != '0')
        {
            printf("十");
        }
        if(i == 1 && x[i] != '0')
        {
            printf("百");
        }
        if(i == 0 && x[i] != '0')
        {
            printf("千");
        }
    }
}
void cha(char x)
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