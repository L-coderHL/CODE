#include <stdio.h>
#include <string.h>

int main()
{
    int m, l;
    char a[20], cache1[20] = {"\0"}, cache2[20] = {"\0"};

    scanf("%s", a);
    scanf("%d", &m);

    int i, j = 0;

    for(i = 0; i < m; i++)
    {
        cache1[i] = a[i];
    }
    l = strlen(a);

    for(i = m; i < l; i++)
    {
        cache2[j] = a[i];
        j++;
    }

    printf("%s", strcat(cache2,cache1));
    
    
    
    return 0;
}