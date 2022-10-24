#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int i, j;
    int l;
    int b[5] = {0};

    gets(a);
    l = strlen(a);
    if(l < 6)
    {
        printf("Not Safe");
    }
    else
    {
        for(i = 0; i < l; i++)
        {
            if(a[i] >= 'a'&& a[i] <= 'z')
            {
                b[0] = 1;
            }
            else if (a[i] >= '0' && a[i] <= '9')
            {
                b[1] = 1;
            }
            else if(a[i] >= 'A' && a[i] <= 'Z')
            {
                b[2] = 1;
            }
            else
            {
                b[3] = 1;
            }
        }
        b[4] = b[0] + b[1] +b[2] + b[3];
            if(b[4] == 1)
            {
                printf("Not Safe");
            }
            else if(b[4] == 2)
            {
                printf("Medium Safe");
            }
            else if(b[4] >= 3)
            {
                printf("Safe");
            }
    }
    return 0;
}