#include <stdio.h>
int main()
{
    int a[10];
    int *p=&a[0];
    int i;

    for(i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }
   
    for(i = 0; i <= 9; i++)
    {
        printf("%d ",*p++);
    }
    return 0;
}