#include <stdio.h>
#include <math.h>
#include <string.h>
void offset(int *a, int l, int flag)//l是数组长度，flag指示方向，1向左，-1向右
{
    int temp, i;
    if(flag == -1)
    {       
        temp = a[0];
        for(i = 0; i < l; i++)
        {
            a[i] = a[i+1];
        }
        a[l - 1] = temp;
    }
    else if(flag == 1)
    {
        temp = a[l-1];
        for(i = l-1; i >= 0; i--)
        {
            a[i] = a[i-1];
        }
        a[0] = temp;
    } 
}

int main()
{
    int i, j;
    int l,k;
    int a[10] = {0};
    scanf("%d%d", &l, &k);
    for(i = 0; i < l; i++)
    {
        scanf("%d",&a[i]);
    }
    if(k < 0)
    {
        k = -k;
        for(i = 0; i < k; i++)
        {
            offset(a,l,1);
        }
    }
    else
    {
        for(i = 0; i < k; i++)
        {
            offset(a,l,-1);
        }
    }
          
    for(i = 0; i < l; i++)
    {
        printf("%d ",a[i]);
    }
   return 0;
}
