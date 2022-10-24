#include <stdio.h>
#include <string.h>
int main()
{
    char id[18];
    char cmp[] = {'0','1','2','3','4','5','6','7','8','9'};
    char e[12] = {"10X98765432"};
    int id_n[17];
    int i, j, multi, sum = 0, d, result;
    int c[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    
    gets(id);
    for(i = 0; i <= 16; i++)
    {
        id_n[i] = id[i] - 48;
        multi = id_n[i] * c[i];
        sum = sum + multi;
    }
    d = sum % 11;
    printf("%c", e[d]);
    
    return 0;

}