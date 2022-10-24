#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *b ^ *a;     
}

//StudybarCommentBegin
int main( )
{
        int a,b;
        scanf("%d%d",&a,&b);
        swap(&a,&b);
        printf("%d %d",a,b);
        return 0;
}
//StudybarCommentEnd