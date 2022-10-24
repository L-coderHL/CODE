//StudybarCommentBegin
#include <stdio.h>
int main()
{
void input(int *p);
void sort(int *p);
void output(int *p);
int a[10],*p=a;
input(p);
sort(p);
output(p);

return 0;
}
//StudybarCommentEnd
void input(int *p)
{
    int i;
    for(i = 0; i <= 9; i++)
    {
        scanf("%d",p + i);
    }
}
void sort(int *p)
{
    int i, j;
    int a;
    for(i = 0; i <= 8; i++)
    {
        for(j = i + 1; j <= 9; j++)
        {
            if(*(p + i) < *(p + j))
            {
                a = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = a;
            }
        }
    }
}
void output(int *p)
{
    int i;
    for(i = 0; i <= 9; i++)
    {
        printf("%d ",p[i]);
    }
}