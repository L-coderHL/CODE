#include <stdio.h>
int main()
{
    int a, b;
    int *p1, *p2;
    int *temp = 0;

    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    if(*p1 < *p2)
    {
        temp = p1;
        p1 = p2;
        p2 = temp;
    }

    printf("%d %d", *p1, *p2);
    return 0;
}