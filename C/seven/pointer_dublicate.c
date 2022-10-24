#include <stdio.h>
int main()
{
    char a[100] = {'\0'}, b[100] = {'\0'};
    void dub(char *a,char *b);

    gets(a);
    dub(a,b);
    printf("%s",b);
    return 0;
}

void dub(char *a, char *b)
{
    int i, j;
    for(i = 0; *(a + i) != '\0'; i++)
    {
        *(b + i) = *(a + i);
    }
}
