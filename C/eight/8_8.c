#include <stdio.h>
int main()
{
    
    int a[10];
    int i, j;
    for(i = 0; i <= 9; i++)
    {
        scanf("%d", a+i);
        if(a[i] > a[0] && i > 0)
        {
            a[1] = a[0];
            a[0] = a[i];                     
        }       
    }
    printf("%d %d", a[0], a[1]);
    return 0;
}