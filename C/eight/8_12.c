#include <stdio.h>
int main()
{
    int i, j, a[10], sum = 0, temp;
    
    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for(j = 0; j <= 8; j++)
    {
        for(i = j; i <= 9; i++)
        {            
            if(a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }         
    }

    for(i = 0; i <= 4; i++)
    {
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
}