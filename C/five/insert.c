#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int i, j;
    int l1;
    char c[20], b[20], str[40] = {"\0"};

    scanf("%d", &n);
    scanf("%s", c);
    scanf("%s", b);
    l1 = strlen(b);

    for(i = 0; i < n - 1; i++)
    {
        str[i] = c[i];
    }
    strcat(str, b);
    for(i = n + l1 -1; c[n - 1] != '\0'; i++)
    {
        str[i] = c[n - 1];
        n++;
    }
    printf("%s", str);
    return 0;

}