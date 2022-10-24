#include <stdio.h>
#include <string.h>
int main()
{
    char a[14] = {"0"}, c[12] = {"0123456789X"};
    int b[9];
    int i, j;
    int sum, d = 0;
    
    gets(a);
    for(i = 0, j = 0, sum = 0; i<= 11; i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            b[j] = (int)a[i] - 48;
            sum = sum + b[j] * (j + 1);
             j++;
        }
    }
    d = sum % 11;
    if(c[d] == a[12])
    {
        printf("Right");
    }
    else
    {
        a[12] = c[d];
        for(i = 0; i <= 12; i++)
        {
            printf("%c", a[i]);  
        }
    }
    return 0;
}