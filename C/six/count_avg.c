#include <stdio.h>
int max;
int main()
{
    int a[10];
    int i, j, c;
    int count_avg(int a[]);

    for(i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);  
    }
    c = count_avg(a);
    printf("%d\n%d", c, max);
    
    return 0;
}

int count_avg(int a[])
{
   float sum = 0, avg = 0;
   int c = 0;
   int i;
   for(i = 0, max = 0; i <= 9; i++)
    {
        sum = sum + a[i];
        if(a[i] > max)
        {
            max = a[i];
        }
        
    }
    avg = sum / 10; 
    for(i = 0; i <= 9; i++)
    {
        if(a[i] > avg)
        {
            c++;
        }    
    }
    return c;
}