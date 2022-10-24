#include <stdio.h>
int count = 0;
void move(char a, char b)
{
    printf("%c-->%c\n", a, b);
    count++;
}

void hnt(int n, char a, char b, char c)
{
    if(n == 1)
    {
        move(a, c);
    }
    else
    {
        hnt(n - 1, a, c, b);
        move(a, c);
        hnt(n - 1, b, a, c);
    }   
}

int main()
{
    int n;
    
    scanf("%d", &n);
    hnt(n, 'A', 'B', 'C');
    printf("%d", count);
    return 0;
}
