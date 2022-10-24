#include <stdio.h>
int main()
{
    int n;
    int i;
    int sum_even = 0, sum_odd = 0, sum = 0; 
    
    scanf("%d", &n);
    for(i = 0; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            sum_even = sum_even + i; 
        }
        else
        {
            sum_odd = sum_odd + i;
        }
        sum = sum + i;
    }
    printf("%d\n%d\n%d", sum_even, sum_odd, sum);
    return 0;
}