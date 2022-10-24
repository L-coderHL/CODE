#include <stdio.h>
int main()
{
    int x, y, z;
    int *p1, *p2, *p3;
    void order(int *x, int *y, int *z);

    scanf("%d %d %d", &x, &y, &z);
    p1 = &x;
    p2 = &y;
    p3 = &z;
    order(p1, p2, p3);
    printf("%d %d %d",x, y, z);
    return 0;
}

void order(int *x, int *y, int *z)
{

    void swap(int *x, int *y);

    if(*x < *y)
    {
        swap(x,y);
    }
    if(*x < *z)
    {
        swap(x,z);
    }
    if(*y < *z)
    {
        swap(y, z);
    }
}

void swap(int *x, int *y)
{
        int temp;
        temp = *y;
        *y = *x;
        *x = temp;
}