#include <stdio.h>

int prime(int a)
{
    int i, d = 1;   
    if(a == 0)
    {
        d = 0;
    } 
    for(i = 2; i <= a / 2; i++)
    {
        if(a % i != 0) continue;
        d = 0;
        break;        
    } 
    return d;
}

int rank(int *a)
{
    int i, j, k, min, t;
    int temp;
    
    for(i = 0, j = 0; i <= 9; i++)
    {
        if(prime(*(a + i)) == 1)
        {
            a[j] = a[i];
            j++;
        }
    }
    for(i = 0; i < j; i++)
    {
        for(k = i + 1, min = a[i], t = i; k < j; k++)
        {
            if(a[k] < min)
            {
                t = k;
                min = a[k];
            }
        }
        temp = a[i];
        a[i] = a[t];
        a[t] = temp;
    }
    return j;
}

int main()
{
    int a[10];
    int i, k;

    for(i = 0; i <= 9; i++)
    {
        scanf("%d", a + i);
    } 
    k = rank(a);
    if(k == 0)
    {
        printf("No prime");
    }
    else
    {
        for(i = 0; i < k; i++)
        {
            printf("%d ", *(a + i));
            // if(i != k-1)
            // {
            //     printf(" ");
            // }       
        }   
    }    
}
