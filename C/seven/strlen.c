#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = {'\0'};
    int i;

    gets(a);
    for(i = 0; *(a + i) != '\0'; i++);
    printf("%d",i);
    return 0;
}