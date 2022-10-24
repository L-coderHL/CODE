#include <stdio.h>
int main()
{
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4] = a;
    void output(int (*p)[4]);
    output(a);
    return 0;
}
void output(int (*p)[4])
{
    int i, j;
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            printf("%d\t",*(*(p + i) + j));
        }
        if(i == 2) break;
        printf("\n");
    }
}
    