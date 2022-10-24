#include <stdio.h>
int main()
{
    int x, y;
    int *p1, *p2;
    void swap(int *x, int *y);

    scanf("%d %d", &x, &y);
    p1 = &x;
    p2 = &y;
    swap(p1, p2);
    printf("%d %d",x, y);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    if(*x < *y)
    {
        temp = *y;
        *y = *x;
        *x = temp;
    }
}