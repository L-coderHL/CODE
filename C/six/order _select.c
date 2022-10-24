#include <stdio.h>
int main()
{
    int a[10];
    int i, j, max = 0, k;

    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        if(max < a[i])
        {
            k = i;
            max = a[i];
        }
    }
    printf("%d %d", max, k + 1);
    return 0;
}