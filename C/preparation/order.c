#include <stdio.h>
#
int main()
{
    char str[10];
    int i, j, k;
    char min, cache;
    
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1, min = str[i], k = i; str[j] != '\0'; j++)
        {
            if(min > str[j])
            {
                min = str[j];
                k = j;
            }
        }
        cache = str[i];
        str[i] = str[k];
        str[k] = cache;
        printf("%c", str[i]);
    }
    return 0;
}


void order(int *a)
{
    int min, k;
    void swap(int *, int, int)
    for(i = 0; i <= 9; i++)
    {
        for(j = i + 1, min = a[i], k = i; j <= 9; j++)
        {
            if(min > a[j])
            {
                k = j;
                min = a[j];               
            }
        }
        swap(a + k,a + j);
    }
}

