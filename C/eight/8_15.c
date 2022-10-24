#include <stdio.h>
#include <string.h>
int main()
{
    int a[10], b[10]={0,1,2,3,4,5,6,7,8,9};
    int i, j;
    
    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
        for(j = 0; j <= 9; j++)
        {
            if(a[i] == b[j])
            {
                b[j] = -1;
            }           
        }
    }
    for(i = 0; i <= 9; i++)
    {
        if(b[i] != -1)
        {
            printf("%d\n", b[i]);
        }       
    }    
    return 0;
}