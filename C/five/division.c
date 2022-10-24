#include <stdio.h>
int main()
{
    int a, b, c, s = 1;
    int i;
    int div_num(int, int);

    scanf("%d/%d", &a,&b);
    printf("%d.",a / b);
    c = a % b; 
    for(i = 0; i < 200; i++)
    {
        s = div_num(c, b);
        c = 10 * c % b;
        if(c == 0) break;
        printf("%d", s); 
    }
    printf("\n");
    return 0;
}

int div_num(int c, int b)
{
    int num;

    if(10 * c > b)
    {
        num = 10 * c / b;
    }
    else
    {
        num = 0;
    }
    return num;
}
