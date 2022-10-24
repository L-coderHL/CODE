#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int *p;

    for(i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }
    for(p = a+9; p >= a; p--)
    {
        printf("%d ",*p);
    }
    return 0;
}