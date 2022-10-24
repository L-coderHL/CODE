#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    char b[20];
    int l1, l2;
    int i, j = 0;

    scanf("%s", a);
    scanf("%s", b);
    l1 = strlen(a);
    l2 =  strlen(b);

    for(i = l1; i <= l1 + l2 + 1; i++)
    {
        a[i] = b[j];
        j++;
    }
    printf("%s", a);
}